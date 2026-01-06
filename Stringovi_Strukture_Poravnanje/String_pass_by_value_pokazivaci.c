#include<stdio.h>
void swap(char* str1, char* str2){
    char* temp = str1;
    str1 = str2;
    str2 = temp;
}
int main(){
    char* str1 = "Napredno";
    char* str2 = "Programiranje";
    swap(str1, str2);
    printf("str1 is %s, str2 is %s", str1, str2);
    return 0;
}
/*  Što će se ispisati na ekranu
        a)  str1 is Programiranje, str2 is Napredno
        b)  Segmentacijska pogreška
        c)  str1 is Napredno, str2 is Programiranje
        d)  str1 is Napredno, str2 is Napredno
        
    Odgovor: c) 

----------------------------------------------------------------------------------------------------------------
1.)
    Pass by value
----------------------------------------------------------------------------------------------------------------
1.1)   
    Inače u C jeziku, kada nekoj funkciji prosljeđujemo parametre,
    prosljeđujemo na pass by value principu, odnosno, za lokalne potrebe funkcije,
    napravi se kopija te varijable
----------------------------------------------------------------------------------------------------------------
1.2) 
    Prosljeđivanje pokazivača funkciji
    Kada se funkciji proslijedi pokazivač, kopira se memorijska adresa tog pokazivača, 
    u taj novi pokazivač koji se napravio radi potreba funkcije
----------------------------------------------------------------------------------------------------------------
1.3)
    Sve promjene koje se napravile nad tim lokalnim kopijama vidljive su samo,
    unutar te funkcije za koju su se napravile kopije, primjer je naša funkcija zamjene
    
    Str1 i str2, koji su definirani u void swap funkciji, imaju vrijednost
    "Napredno i programiranje", i njihove(lokalne) vrijednosti bivaju zamjenjene, 
    
    str1 i str2, koji su van te funkcije i koji isto sadržavaju, string literale
    "Napredno" i "Programiranje", ne bivaju promijenjeni
----------------------------------------------------------------------------------------------------------------
2.) Izvršvanje
----------------------------------------------------------------------------------------------------------------
2.1)
    str1_main pokazuje na string literal "Napredno"
    str2_main pokazuje na string literal "Programiranje"
----------------------------------------------------------------------------------------------------------------
2.2) 
    Pozivanje swap funkcije
    
    Swap funkcije se poziva, i stvara dva pokazivača, str1_lokal i str2_lokal
    oni sadrže iste adrese kao i str1_main i str2_main
----------------------------------------------------------------------------------------------------------------
3.) Unutar Swap funkcije
----------------------------------------------------------------------------------------------------------------
3.1) 
    str1_lokal i str2_lokal stvarno budu zamijenjeni
    str1_lokal = "Programiranje", str2_lokal = "Napredno"
----------------------------------------------------------------------------------------------------------------
3.2) 
    Nakon izvršavanja void swap funkcije, nakon } znaka, sve varijable
    unutar te funkcije se brišu
    
    str1_main i str2_main, nisu nikada bili promijenjeni
    I dalje pokazuju na originalne string literale
----------------------------------------------------------------------------------------------------------------
*/