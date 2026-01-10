#include<stdio.h>
void ispisi_polje(int* const x, int duljina){
    for(int i=0; i<duljina; i++){
        x[i] = x[i] + i;
        printf("\npolje[%d] = %d", i, x[i]);
    }
}
int main(){
    int polje[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ispisi_polje(polje, 9);
    return 0;
}
/* Što će se ispisati: 
   a) Pogrešku prilikom izvršavanja
   b) Vrijednosti elemenata polja s indeksom od 0 do 9
   c) Pogrešku prilikom prevođenja

   Odgovor: 






*/






