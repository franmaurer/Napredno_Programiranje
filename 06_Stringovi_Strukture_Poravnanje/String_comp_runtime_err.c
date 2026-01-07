#include<stdio.h>
int main(){
    char* buf1 = "Hello";
    char* buf2 = "olleH";
    buf2 = buf1;
    buf2[2] = 'H';
    printf("%s %s", buf1, buf2);
    return 0;
}
/* Što će se ispisati:
    a) Compilation error
    b) Runtime error
    
    Odgovor: b)

------------------------------------------------------------------------------------------------------
char* buf1 && char* buf2 su string literali, i oni se spremaju u Read-Only, segment memorije
------------------------------------------------------------------------------------------------------
buf2 inicijalno pokazuje na "olleH", ali nakon dodijele buf2 = buf1, oba dva
pokazuju na isti blok memorije koji sadrži string "Hello"
------------------------------------------------------------------------------------------------------
buf[2] = 'H' je nedopuštena operacaiju, C standard ne dopušta pisanje u read only segment memorije
-> nedefinirano ponašanje
------------------------------------------------------------------------------------------------------
Događa se run time error, zato što je sintaksa tehnički validna, ali kada program
pokuša dodijeliti vrijednost u segmentu koji samo read only, događa se greška, Operacijski sustav uskače i
baca Segmentation fault
------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
Općenito razlika između compliation i runtime errora;
------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
1. Compilation error: 
    a) Događa se kada kompajler pokuša prevesti source kod u strojni jezik (executable file), ali
    ali kompajler odbije da prevedi cijeli file.
    /////////////
    b) Greška se nalazi u sintaksi ili pravilima jezika 
    ////////////
    c)Primjer: 
        C1) Nedostaje ; na kraju linije 
        C2) innt umjesto int i itd, 
        C3) Korištenje nedeklariranje varijable
        C4) Netočno proslijeđivanje parametara funkciji
------------------------------------------------------------------------------------------------------
2. Runtime Error:
    a) Događa se tijekom izvršavanja samog programa, točno je preved u strojni jezik,
    napravljen je exe file, ali, tijek praćenja instrukcija, procesor je naišao na,
    nemoguću ili nedopuštenu instrukciju
    /////////////
    b) Događa se kad korisnik pokrene exe file
    /////////////
    c) Primjeri: 
        C1) Dijeljenje s 0, procesor ne zna dijeliti s nulom
        C2) Segmentation fault, odnosno korisnik pokuša pristupiti memoriji koja ne pripada njegovom programu
        C3) Stack overflow, npr. funkcija koja poziva sebe više puta i time potroši svu stack memoriju
        C4) Program pokušava otvoriti file, koji više ne postoji na hard drive-u
*/