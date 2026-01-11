#include<stdio.h>
int main(){
    char maca[5] = "macka";
    char ime[20];
    float br[3];
    int i, polje[4];
    for(i = 7; i < 11; i++){
        scanf("%f", &polje[i-7]);
        
    }
    scanf("%s", ime);
    scanf("%f", br[2]);
    return 0;
}
/* Odaberite jedan ili više odgovora koji su točni:
   a) U 3. scanf-u je pogrešan operator za učitavanje varijable
   b) U 3. scanfu nedostaje adresu operator &
   c) U 1. scanfu je pogrešan format za čitanje varijable
   d) U for petlji su postavljene pogrešne vrijednosti kontrolne varijable
   e) U 2.scanfu nedostaje adresni operator &
   f) Polju maca je dodjeljen pogrešni tip
   
   Odgovor: b), c)
   
--------------------------------------------------------------------
a) U 3. scanfu nema pogreške
Broj je float tipa, 3. scanf čita float tip, 
--------------------------------------------------------------------
b) U 3. scan 
--------------------------------------------------------------------
c) u 1. scanfu, polje je int tipa, a %f specifikator je za čitanje 
realni brojeva ovo je pogrešno
--------------------------------------------------------------------
d) Nedostaje adresni operator 
--------------------------------------------------------------------
f) Za polje maca je alocirano 5 elemenata, a pokuša se upisati
6, odnosno 1. 'm' 2. 'a' 3. 'c' 4. 'k' 5. 'a' 6. '\0'
za zadnji '\0' nema mjesta te je ovo netočno u smislu da nema dovoljno
mjesta u polju, tipa podatka je dobar
--------------------------------------------------------------------





*/





