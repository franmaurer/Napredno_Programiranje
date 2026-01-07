#include<stdio.h>
#include<stdint.h>
struct example{
    uint8_t a;      // 1 byte
    uint16_t b;     // 2 bytes
    uint8_t c;      // 1 byte
    uint32_t d;     // 4 bytes
    uint8_t e;      // 1 byte
};                  // Total without padding = 9 bytes
int main(){
    printf("%d", sizeof(struct example));
    return 0;
}

/* Što će se ispisati na ekranu
    a) 9
    b) 12
    c) 8
    d) 16

    Odgovor: d)

--------------------------------------------------------------------------------
Pravila za poravnanje memorije
--------------------------------------------------------------------------------
1. Svaki clan mora započeti na adresi koja je djeljiva s njegovom veličinom
npr. 4 byte-ni int, mora početi na adresi koje je djeljiva s brojem 4
--------------------------------------------------------------------------------
2. Ukupna veličina strukture mora biti višekratnik svojeg najvećeg člana,
što je u ovom slučaju uint32 od b byte-a
--------------------------------------------------------------------------------
Član    Veličina    Ukupno      Poravnanje      Razlog poravnanja

a           1           0           1               b je 2 byte i treba mu 1 da bude djeljiv s 2
            
b           2           2           0               savršeno upakiran djeljivo s dva

c           1           4           3               d je 4 byte i c-u treba 3 da bi bio djeljiv s 4

d           4           8           0               savršeno upakiran, djeljiv s 4
            
e           1           12          3               tri bajta zato da bit Veličina cjele strukture bila djeljiva s 4 (najveći tip)

*/