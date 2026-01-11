#include<stdio.h>
int main(void){
    int a = 1, b = 2, c = 3;
    int* const pok = &a;
    pok = &c;
    printf("%d", *pok);
    return 0;
}
/* Što će se ispisati:
   a) Pogreška prilikom prevođenja
   b) 1
   c) 3
    
   Odgovor: a)

---------------------------------------------------------------------
Pokazival je definiran tako, da mu se adresa ne može mijenjati
pok = &c ------> nije dozvoljeno

*/