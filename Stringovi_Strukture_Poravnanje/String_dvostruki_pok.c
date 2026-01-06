#include<stdio.h>
int main(){
    char* cities[] = {"UAE", "Spain", "America"};
    char** i = &cities[0];
    char** j = &cities[1];
    char** k = &cities[2];
    printf("%c %c %c\n", **i, **j, **k);
    return 0;
}
/*
    Što će ispisati na ekranu:
        a)  USA
        b)  Ništa od navedenog
        c)  Upa 
        d)  UAE
    
    Odgovor: a)
-----------------------------------------------------------------------------------------------------------------
1.) Polje pokazivaca
-----------------------------------------------------------------------------------------------------------------
1.0) char* cities[] predstavlja polja pokazivaca na string literal
     svaki element tog polja je pokazivac, na neku adresu gdje se nalaze, ti stringovi
-----------------------------------------------------------------------------------------------------------------
1.1) &cities[0], pokazivac na string literal na nultom indeksu polja, 
     odnosno "UAE"
-----------------------------------------------------------------------------------------------------------------
1.2) &cities[1], pokazivac na string literal na prvome indeksu polja,
     odnosno "Spain"
-----------------------------------------------------------------------------------------------------------------
1.3) &cities[2], pokazivac na string literal na drugome indeksu polja
     odnosno "America"
-----------------------------------------------------------------------------------------------------------------
2.) Dvostruki pokazivaci
-----------------------------------------------------------------------------------------------------------------
2.1) char** i = &cities[0];
     pokazivac imena i, pokazuje na pokazivac koji pokazuje na "UAE" string literal
-----------------------------------------------------------------------------------------------------------------
2.2 char** j = &cities[1];
    pokazivac imena j, pokazuje na pokazivac koji pokazuje na "Spain" string literal
-----------------------------------------------------------------------------------------------------------------
2.3 char** k = &cities[2];
    pokazivac imena k, pokazuje na pokazivac koji pokazuje na "America" string literal
-----------------------------------------------------------------------------------------------------------------
3.) Dvostruko dereferenciranje **
-----------------------------------------------------------------------------------------------------------------
3.1 Prvo dereferenciranje:
-----------------------------------------------------------------------------------------------------------------
    a) char** i, je dvostruki pokazivac, odnosno, to je varijabla koja sprema, u sebe
    adresu neke druge varijable (pokazivac) koja isto sprema adresu (isto pokazivac)
-----------------------------------------------------------------------------------------------------------------
    b) *i, odnosno odi na adresu gdje je spremljen i, tu se nalazi adresa &cities[0], 
    koja je pokazivac, na string literal "UAE"
-----------------------------------------------------------------------------------------------------------------    
3.2 Drugo dereferenciranje:
-----------------------------------------------------------------------------------------------------------------
    a) **i, otišli smo na adresu sadržanu u dvostrukom pokazivaču, druga zvijezdica,
    sada označava da moramo otići na adresu koju sadrži taj pokazivač, odnosno onaj na, koji
    dvostruki pokazivač pokazuje, i uzeti vrijednost s te adrese
-----------------------------------------------------------------------------------------------------------------
    b) koristi se %c specifikator, odnosno uzimamo samo jedan znak s te adrese,
    s nultog indeksa, a to je "U"
-----------------------------------------------------------------------------------------------------------------
        **i → *(*(i)) → *(cities[0]) → 'U'
        
        **j → *(*(j)) → *(cities[1]) → 'S'
        
        **k → *(*(k)) → *(cities[2]) → 'A'
-----------------------------------------------------------------------------------------------------------------
4.) Printanje printf("%c %c %c",)
    Uzmi tri karaktera te printaj ih s razmakom
-----------------------------------------------------------------------------------------------------------------
    Ispis: "U S A"
*/