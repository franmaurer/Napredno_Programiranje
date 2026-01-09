#include <stdio.h>
int sum(int* a, int b){
    *a = 9;
    b = 3;
    return *a + b;
}
int main()
{
    int a = 5;
    int b = 8;
    int c;
    c = sum(&a, b);
    printf("Zbroj broja a = %d i broj b %d je %d i %d", a, b, c, a + b);
    return 0;
}
/*  Što će se ispisati:
    a) Zbroj broja 5 i broja 8 je 8 i 13
    b) Zbroj broja a = 9 i broja b = 8 je 15 i 17
    c) Zbroj broja a = 5 i broja b = 8 je 13 i 13
    d) Zbroj broja a = 9 i broja b = 8 je 12 i 17

    Odgovor: d)

-----------------------------------------------------------------------
a se prosljeđuje funkciji preko adrese a b preko vrijednosti varijable
-----------------------------------------------------------------------
*a = 9 ------> postavlja a iz main funkcije na vrijednost 9
-----------------------------------------------------------------------
Zbroji a = 9 i b = 3 --------> funkcija vraća 12
-----------------------------------------------------------------------
U main-u, a = 9, b = 8, c = 12, a + b = 9 + 8 = 17
Dakle odgovor je d)


*/