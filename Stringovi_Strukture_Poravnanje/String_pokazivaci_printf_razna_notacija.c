#include<stdio.h>
int main(){
    char str[] = "%c %c", arr[] = "Osijek";
    printf(str, 0[arr], 2[arr + 3]);
    return 0;
}
/*  Što će se ispisati na ekranu
        a) Osijek k
        b) O k
        c) Ništa od navedenog
        d) k O
    
    Odgovor: b) 

---------------------------------------------------------------------------------------------------------------------
Format printanja stringa je spremljen u string str[]
---------------------------------------------------------------------------------------------------------------------
string "Osijek" je spremljen u arr[]
---------------------------------------------------------------------------------------------------------------------
Kod pozivanja print(str, 0[arr], 2[arr + 3]), 
1.)funkcija vidi da mora printati dva znaka, koji su odvojeni razmakom, to je spremljeno u str[]
---------------------------------------------------------------------------------------------------------------------
2.) 0[arr] je ekvivalentno arr[0], odnosno uzmi se karakter na adresu s indeksom 0,
u stringu arr, a to je O -> "Osijek"
---------------------------------------------------------------------------------------------------------------------
3.) 2[arr + 3]
    //////////////////////////////////////////////////////////////////////////////////
    3.1) arr, je ime stringa, ime stringa predstavlja adresu prvog elementa u stringu,
    odnosno, na O iz "Osijek"
    
    0   1   2   3   4   5
    O   s   i   j   e   k
    O iz "Osijek"
    //////////////////////////////////////////////////////////////////////////////////
    3.2) [arr + 3], adresa prvog elementa u stringu, pomakni se za 3, odnosno to je j -> "Osijek",
    ovaj izraz trenutno pokazuje na j
    
    0   1   2   3   4   5
    O   s   i   j   e   k
    j iz "Osijek"
    /////////////////////////////////////////////////////////////////////////////////
    3.3) [arr + 3] je zapravo pokazivac na j znak, stoga 2[arr + 3] == 2[pokazivac_na_j]
    
    2[pokazivac_na_j] je identično kao i pokazivac_na_j[2], odnosno pomakni pokazivac na j
    za jos dva koraka, a to je na k karakter
    0   1   2   3   4   5
    O   s   i   j   e   k
    k iz "Osijek"
---------------------------------------------------------------------------------------------------------------------
4.) Prvi %c prima O karakter
    Drugi %c prima k karakter
---------------------------------------------------------------------------------------------------------------------
5.) Ispis: Ok

*/