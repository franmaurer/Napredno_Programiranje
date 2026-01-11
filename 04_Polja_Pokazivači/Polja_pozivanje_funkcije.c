#include<stdio.h>
int func(int array[], int n){
    return array[n];
}
int main(void){
    int a[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9, 10};
    printf("%d", func(a, 5));
    return 0;
}
/* Što će se ispisati
   a) 5
   b) Slučajan broj
   c) Ništa od navedenog
   d) Greška prilikom kompajliranja

   Odgovor: c)
   
---------------------------------------------------------------------------
Funkcija func() prima adresu nekog polja, ime polja je adresa
prvo elementa
---------------------------------------------------------------------------
func() vraća n-ti element tog polja, u polju indeksi idu od 0 - n
---------------------------------------------------------------------------
func(a, 5), proslijeđen je parametar da vrati element na indeksu 5
a to je za naše polje broj 6

*/