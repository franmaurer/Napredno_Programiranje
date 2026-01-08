#include<stdio.h>
#include<stdint.h>
int main(void){
    uint32_t x = 0;
    x = x << 33;
    x = x >> (-1);
    return 0;
}
/* Odgovor: Ilegalno bitovsko pomicanje, 

-------------------------------------------------------------------------------------------------
1. Tip podatka koji se koristi je unsigned integer, duljine 32 bita
odnosno on predstavlja brojeve za koje je rezervirano 32 bita za predstavljanje
-------------------------------------------------------------------------------------------------
1.1) Ako je maksimalno moguće koristiti 32 bita, a program ga pomakne za 33 bita, ta operacija
je nedefinirana standardom, odnosno naš program može poprimiti nasumične rezultate
-------------------------------------------------------------------------------------------------
1.2) Pomicanje u destno za -1 bita isto nema smisla, te je nedefinirano ponašanje, -1 je često 
zapisana kao 32 bitni niz 1, te procesor će vjerojatno optimizirati, ovaj kod >> 31
x >> (-1) --------> x >> 31
-------------------------------------------------------------------------------------------------
1.3) Bitovsko pomicanje uvijek mora ostati unutar, scope-a, sve van scope-a, našeg tipa podatka,
je nedefinirano ponašanje
*/