#include <stdio.h>
#define SOME_CONST 5 * 2
int main()
{
    int x;
    const int some_const = 5 + 2;
    x = some_const * SOME_CONST;
    printf("%d", x);
    return 0;
}
/*
    Što će se ispisati na ekranu:
    a) Greška prilikom prevođenja
    b) 70
    c) 25
    d) Ništa od navedenog

    Odgovor: b)

-------------------------------------------------------------------------------
1. Define makro predstavlja, zamjenu teksta
-------------------------------------------------------------------------------
Konstanta može biti definirana preko izraza kao gore
-------------------------------------------------------------------------------
some_const * SOME_CONST = 7 * 5 * 2 = 70
-------------------------------------------------------------------------------




*/
