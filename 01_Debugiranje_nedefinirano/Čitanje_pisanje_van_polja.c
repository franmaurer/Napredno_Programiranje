#include<stdio.h>
int main(){
    char a[10];
    printf("%d", a[10]);
    a[-1] = 7;
    return 0;
}
/*  Odgovor: Čitanje i pisanje van elementa

-------------------------------------------------------------------------------------
1) Alocira se polje od 10 članova za char tip podatka,
valjani indeksi za pristup polju su;
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
-------------------------------------------------------------------------------------
2) Program pokuša pristupiti, elementu na indeksu 10, s obzirom da je polje
definirano samo do indeksa 10, memorijski blok tog polja staje na tom mjestu
-------------------------------------------------------------------------------------
2.1) Rezultat čitanja s te adrese, će biti da program, čita neki garbage,
koji se nalazi na tom mjestu
-------------------------------------------------------------------------------------
3) Pisanje u ne-alociranom djelu memorije, program pokuša dodijeliti vrijednost sedam
na memorijsku lokaciju, točno prije adrese početka samog polja
-------------------------------------------------------------------------------------
3.1) Ovo je opasno, zato što takvo dodjeljivanje može promijeniti vrijednost
neke druge varijable, te onesposobiti program tako
------------------------------------------------------------------------------------
*/