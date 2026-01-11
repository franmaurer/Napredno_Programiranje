#include<stdio.h>
int main(void){
    short y = 11;
    float* p = (short*)&y;
    printf("%d", sizeof(p));
    return 0;
}
/*  Što će se prikazati na ekranu, ukoliko se 
    nalazimo na 32-bit arhitekturi

    Odgovor: 4
---------------------------------------------------------------------------
1. Veličina pokazivačkog tipa na 32-bit arhitekturi iznosi
   4 bajta, za 64-bitnu iznosi 8 bajta.
*/