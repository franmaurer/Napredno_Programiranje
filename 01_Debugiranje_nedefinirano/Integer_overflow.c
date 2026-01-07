#include<stdio.h>
#include<limits.h>
int main(){
    int x = INT_MAX;
    x++;
}
/* Odgovor: Integer Overflow
   
--------------------------------------------------------------------------------------------------------------   
INT_MAX predstavlja konstantu iz #include<limits.h>, biblioteke, taj broj predstavlja
maksimalnu vrijednostu koju signed integer može poprimiti na određenome računalu
--------------------------------------------------------------------------------------------------------------   
Kada se x-u dodijeli INT_MAX, on poprimi najveću vrijednost, koju integer može spremiti u sebe,
operacija x++, želi inkrementirati taj broj za jedan, te ona dovodi do nedefiniranog ponašanja
--------------------------------------------------------------------------------------------------------------   
U ovome slučaju, na većini modernih procesora doći će do promjene predznaka,
s 2,147,483,647 skačemo na -2,147,483,647 koji predstavlja INT_MIN
--------------------------------------------------------------------------------------------------------------   
Do ovoga dolazi zbog Dvojnog komplementa
--------------------------------------------------------------------------------------------------------------   




   
   
   
   
   
*/





