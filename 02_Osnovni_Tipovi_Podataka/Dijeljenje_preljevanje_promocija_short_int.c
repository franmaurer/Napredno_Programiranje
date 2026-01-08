#include<stdio.h>
int main(){
    unsigned char x = 255;
    unsigned char y = 255;
    unsigned char z = x + y;
    
    if((char)(x + y) > 300){
        printf("Točno");
    }
    else{
        printf("Netočno");
    }    
    printf("%d\n", z);
    return 0;
}
/* Što će se ispisati na ekran:
    
    Odaberite jedan odgovor:
    a) Točno, 254
    b) Točno, 510
    c) Netočno, 254
    d) Netočno, 510

    Odgovor: c)

---------------------------------------------------------------------------------------------------
1. U C jeziku, kada se koriste mali tipovi podataka, poput char i short, oni se automatski,
    pretvaraju u int tip, 255 (int) + 255 (int) = 510 (int)
    510 (int) se sada sprema u unsigned char tipa, UC može spremiti od [0, 255] cijele brojeve
    U UC tip će spremiti podatak na principu 510 % 256 = 254, odnosno z = 254
---------------------------------------------------------------------------------------------------
1.2 if statement
    a) x(UC) i y (UC) tip su promovirani u (int), 255(int) + 255(int) = 510 (int) tipa
    (char)(x+y), 
    b) Eksplicitno kastanje 510(int) tipa u tipa char, 510 % 127 = 2, 
    kada iz većeg cijelobrojnog u manji ideš, uzmi veći i modulo max_range od manjeg
    c) char(x+y) = -2, -2 !> 300, dakle printaj "netočno"
*/