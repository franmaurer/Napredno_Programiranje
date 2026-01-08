#include<stdio.h>
int main(){
    short a[10];
    short* p = &a[15];
    return 0;
}
/*  Odgovor: Pristupanje elementu van polja

-------------------------------------------------------------------------------------------------
1. Program rezervira memoriju za polje podataka tipa short, 10 elementa ukupno,
validnih indeksa od 0 do 9, a[0] ..... a[9]
-------------------------------------------------------------------------------------------------
1.1) Program stvara pokazivač i usmjerava ga na 15. element, u tom polju,
s obzirom da je program zauzeo za naše polje samo 10 elemenata, pokazivač će
se usmjeriti na neku nasumičnu vrijednost koja se nalazi 5 indeksa nakon našeg polja
-------------------------------------------------------------------------------------------------
*/