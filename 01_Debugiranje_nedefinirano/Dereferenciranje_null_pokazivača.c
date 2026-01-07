#include<stdio.h>
int main(void){
    int* p = NULL;
    *p = 123;
}
/*  Odgovor: Dereferenciranje null pokazivača
--------------------------------------------------------------------------------------------------------------------
    Program deklarira jedan pokazivač imena p, i predaje mu se null adresa, odnosno
    ne pokazuje u ništa, ovako definirana nule je ekvivalentna konstanti 0
--------------------------------------------------------------------------------------------------------------------
    Dereferenciranje je greška, * operator je naredba računalu, na ode na adresu
    i uzme vrijednost koja se tamo nalazi
--------------------------------------------------------------------------------------------------------------------
    Problem je također, što korisnik pokušava pisati u zaštićeni dio memorije
--------------------------------------------------------------------------------------------------------------------
    Rezultat: Crash, OS, detektira pokušaj od korisnika da piše podatake, na read only 
    mjesto te prekida program da bi zaštitio računalo
--------------------------------------------------------------------------------------------------------------------
    Ovo se tipično zove Segmentation fault
--------------------------------------------------------------------------------------------------------------------














*/




