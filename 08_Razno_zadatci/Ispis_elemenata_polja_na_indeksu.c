

#include<stdio.h>
void ispisi_polje(int* x, int duljina){
    for(int i = 0;i<duljina;i++){
        x[i] = x[i] + i;
        printf("\npolje %d = %d", i, x[i]);
    }
}
int main(void){
    int polje[] = {1, 2, 3, 4, 5, 6 ,7 ,8 ,9};
    ispisi_polje(polje, 9);
    return 0;
}
/*
Sto ce se ispisati na ekranu

    a) Pogreska prilikom prevodenja
    b) Vrijednost elemenata polja s indeksom od 0 do 9
    c) Pogresku prilikom izvodenja


Odgovor: b)




*/