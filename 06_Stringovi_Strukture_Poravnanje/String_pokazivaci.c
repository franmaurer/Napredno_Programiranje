#include <stdio.h>
int main()
{
    char str[] = "NaprednoProgramiranje";
    printf("%s %s %s ", &str[8], &8 [str], str + 8);
    printf("%c %c %c ", *(str + 9), str[9], 9 [str]);

    /*
    a) Ništa od navedenog
    b) Programiranje Programiranje Programiranje P P P
    c) Programiranje Programiranje Programiranje r r r
    d) rogramiranje Programiranje Programiranje r r r

    ODGOVOR: c)
----------------------------------------------
    1.Prvi print
----------------------------------------------
    %s specifikator očekuje pokazivač koji pokazuje na početak stringa, te
    printa dok ne dođe do \0
----------------------------------------------
    1.1
    &str[8] = uzmzi karakter na indeksu 8, odnosno P i idi do do \0, sto daje
    Programiranje
----------------------------------------------
    1.2
    &8[str] = a[i] je ekvivalent *(a + i), ondnosno &8[str] = &str[8],
    karakter na 8. indeksu je P, odnosno kreni od P te idi do \0 = Programiranje
----------------------------------------------
    1.3
    str + 8 = str je ime stringa, odnosno on decaya u pokazivac na prvi element,
    on se pomakne za osam ideksa te dobijemo P karakter, isto kao i prije,
    kreni od P te do \0 pa printaj = Programiranje
-------------------------------------------------
    2. Drugi print
----------------------------------------------------
    %c specifikator se koristi za printanje jednog znaka
----------------------------------------------------
    2.1
    *(str + 9) = ime stringa str predstavlja adresu prvog znaka u stringu, odnosno
    N, pomakni ga za 9 indeksa, to je r, te dereferenciraj = uzmi vrijednost
----------------------------------------------------
    2.2
    str[9] = isto kao i gore, samo je notacija polja, str je adresa prvog znaka,
    N, pomakni se za 9 indeksa, te [] predstavlja dereferenciranje -> r
----------------------------------------------------
    2.3
    9[str] = isto pravilo kao i gore, 9 predstavlja vrijednost za koliko se pomice,
    pokazivac, str je adresa prvog elementa = r
    */
    return 0;
}