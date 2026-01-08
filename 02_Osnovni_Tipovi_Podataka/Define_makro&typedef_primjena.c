#include<stdio.h>
#define char char*
typedef short int16;
int main(){
    int i = 8;
    if(sizeof(char*) <= sizeof(int16))
        printf("Točno");
    else
        printf("Netočno");
}
/* Što će se ispisati:
   a) Netočno
   b) Točno
   c) Ništa od navedenog
   d) Greška prilikom ispisa
    
   Odgovor: a)
   
--------------------------------------------------------------------------------------------------------------
1. Makro je samo copy paste
   Kada kompajler naleti na definiran makro, on će uzeti
   char i zamijeniti ga s char*
--------------------------------------------------------------------------------------------------------------
2. Typedef = preimenovanje nekog standardnog tipa podatka u korisnički
--------------------------------------------------------------------------------------------------------------
3. sizeof(char*) -> zamijeni char s char* -----> postaje sizeof(char**)
    pokazivač na pokazivač je 8 bajta velik
    if(short(2 bajte) < char**(8 bajta)) -----> printf("Netočno")
*/