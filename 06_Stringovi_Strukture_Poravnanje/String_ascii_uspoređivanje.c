#include<stdio.h>
int main(){
    char ime[20] = "Luka";    
    char prezime[20] = "Modric";
    if(ime[1] > prezime[5])
        printf("Real madrid");
    else if(ime[1] < prezime[5])
        printf("Barcelona");
    else
        printf("Sevilla");
    return 0;
}
/* Što će se ispisati:
   a) Sevilla
   b) Real madrid
   c) Barcelona
   d) Ništa od navedenog

   Odgovor: b)
   
-----------------------------------------------------------------
Zadatak uspoređuje ascii vrijednosti u string literalima
-----------------------------------------------------------------
*/