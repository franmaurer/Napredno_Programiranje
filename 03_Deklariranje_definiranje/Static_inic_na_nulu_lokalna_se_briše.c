#include<stdio.h>
static int x;
int main(void){
    {
        int x = 5;
    }
    printf("%d\n", x);
    return 0;
}
/* Odaberite što će se ispisati: 
   a) 5
   b) Greška prilikom prevođenja programa
   c) Slučajan broj
   d) 0

   Odgovor: d)

----------------------------------------------------------------------------
1. Sve varijable statičke trajnosti će biti inicijalizirane na nulu
----------------------------------------------------------------------------
int x traje samo unutar bloka gdje je definiran, te se briše nakon što se
njegov blok izvrši
*/