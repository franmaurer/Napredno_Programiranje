#include<stdio.h>
int main(void){
    int array[6] = {11, 22, 33, 44, 55, 66};
    int* ptr = &array[6];
    printf("%d", *ptr);
    return 0;
}
/* Što će se ispisati:
   a) Segmentation fault
   b) 44
   c) Slučajan broj
   d) 55

   Odgovor: c)

------------------------------------------------------------------------
Definira se polje od 6 elemenata, indeksi od 0 - 5
------------------------------------------------------------------------
U pokazivač se sprema adresa elementa indeksa 6, to je van
memorija alocirano za naše polje ------> Neki nasumični broj, koji se
nalazi na toj memorijskoj lokaciji u to vrijeme
------------------------------------------------------------------------
*/