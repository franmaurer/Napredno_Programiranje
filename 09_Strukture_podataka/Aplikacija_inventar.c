#include<stdio.h>
#define NAME_LEN 50
#define MAX_PROIZVODI 100
#include<string.h>
typedef struct{
    int dan;
    int mjesec;
    int godina;
}Datum;

typedef struct{
    char naziv[NAME_LEN];
    int kolicina;
    float cijena;
    Datum zadnjaProdaja;
}Proizvod;

typedef struct{
    Proizvod proizvodi[MAX_PROIZVODI];
    int count;
}Inventar;

void init_inventory(Inventar* inv){
    inv->count = 0;
}

int dodaj_proizvod(Inventar* inv, Proizvod pr){
    if(inv->count == MAX_PROIZVODI){
        puts("**************************************************");
        printf("Inventar je pun, ne moze stati vise proizvoda!\n");
        return 0;
    }
    
    inv->proizvodi[inv->count] = pr;
    inv->count++;
    return 1;
}

int brisi_proizvod(Inventar* inv, const char* naziv){
    for(int i = 0; i < inv->count; i++){
        if(strcmp(inv->proizvodi[i].naziv, naziv) == 0){
            for(int j = i; j < inv->count - 1; j++){
                inv->proizvodi[j] = inv->proizvodi[j + 1];
            }
            inv->count--;
            return 1;
        }
    }
    puts("*************************************************");
    printf("Nisam mogao obrisati taj proizvod, tog imena.\n");
    return 0;
}

Proizvod* pronadi_proizvod(Inventar* inv, const char* naziv){
    for(int i = 0; i < inv->count; i++){
        if(strcmp(inv->proizvodi[i].naziv, naziv) == 0){
            return &inv->proizvodi[i];
        }
    }
    puts("***************************************************");
    printf("Nisam mogao pronaci proizvod toga imena");
    return NULL;
}

void print_inventar(const Inventar* inv){
    for(int i = 0; i < inv->count; i++){
        Proizvod p = inv->proizvodi[i];
        printf("Naziv: %s\n", p.naziv);
        printf("Kolicina: %d\n", p.kolicina);
        printf("Cijena: %.2f\n", p.cijena);
        printf("Zadnja prodaja (d/m/g): %02d.%02d.%02d\n\n"
        ,p.zadnjaProdaja.dan,
        p.zadnjaProdaja.mjesec,
        p.zadnjaProdaja.godina
        );
    }
}
int main(){
    Inventar inv;
    init_inventory(&inv);
    
    Proizvod p1 = {"Laptop", 5, 899.99F, {27, 1, 2026}};
    Proizvod p2 = {"Mis", 20, 15.99F, {25, 1, 2026}};
    
    dodaj_proizvod(&inv, p1);
    dodaj_proizvod(&inv, p2);
    
    print_inventar(&inv);
    brisi_proizvod(&inv, "Laptop");
    
    print_inventar(&inv);
    
    return 0;
}





