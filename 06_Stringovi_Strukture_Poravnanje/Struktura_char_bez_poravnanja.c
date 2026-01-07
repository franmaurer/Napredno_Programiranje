#include<stdio.h>
typedef struct{
    char a;
    char b;
}InfoData;
int main(){
    printf("%d", sizeof(InfoData));
    return 0;
}
/*  Što će se ispisati na ekranu
        a) 8
        b) 2
        c) Ništa od navedenog
        d) 16 
        
        Odgovor: b) 

----------------------------------------------------------------------------------------------------------------------
Jednostavan slučaj kada nema poravnanje memorije
----------------------------------------------------------------------------------------------------------------------
char a -> 1 byte, char b -> 1 byte, sveukupno 2 byte
----------------------------------------------------------------------------------------------------------------------
Kompajler poravnava memoriju s obzirom na najveći član, a s obzirom na našu strukturu, gdje su oba tipa char
struktura mora početi na adresi koja je djeljiva s 1, a to je svaka adresa
----------------------------------------------------------------------------------------------------------------------
Prvi član je char tipa, a drugi i jedini je isto char tipa, char b član može se smjestiti, odmah do njega, 
bez poravnanja
----------------------------------------------------------------------------------------------------------------------
*/