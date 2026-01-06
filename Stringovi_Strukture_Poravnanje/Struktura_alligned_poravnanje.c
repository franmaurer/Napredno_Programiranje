#include <stdio.h>

struct mixedData
{
    char data1;
    short data3;
    char data4;
} __attribute__((packed));

int main()
{
    struct mixedData s;
    printf("%d\n", sizeof(s));

    return 0;
}

/*  Što će se ispisati na ekranu
    a) 4
    b) 5
    c) 6
    d) 12

    Odgovor: a)

-------------------------------------------------------------------------------------------------
Vecnina modernih kompajlera dodaje memoriju da bi ju procesor mogao lakse čitati
Shor tip od dva bajta, će imati tendenciju da započne na memoriju koja je parna
-------------------------------------------------------------------------------------------------
Da je ovo uobičajena struktura, bez __attribute__((packed)), kompajler bi umetnuo, prazni blok memorije,
poslje data1, zato da bi data3 mogao početi na parnoj adresi
-------------------------------------------------------------------------------------------------
__attribute__((packed)) direktiva naredi komapjleru da zanemari standardna pravila poravnanja,
te da nagura clanove strukture sto vise moguće
-------------------------------------------------------------------------------------------------
Rezultat tog pakiranja jest da su sva poravnanje izbacena
-------------------------------------------------------------------------------------------------
S packed direktivom,            Bez packed direktive, moramo staviti u obzir i poravnanje
jednostavno, zbrojimo                               | |
velicine clanova strukture,     data1(char)                 = 1 byte        [0 - 1] byte
    | |                         Padding                     = 1 byte        [1 - 2] byte
    | |                         data3(short)                = 2 byte        [2 - 3] byte
data1(char) = 1 byte            data4(char)                 = 1 byte        [4 - 5] byte
data3(short) = 2 byte           Possible extra Padding      = 1 byte        [5 - ] byte
data4(char) = 1 byte
    Zbroj =   4 byte                                Zbroj = 6 byte
-------------------------------------------------------------------------------------------------





































*/
