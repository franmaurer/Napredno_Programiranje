/* Pokazivač na funkciju, deklarian kao float func(int a, int b),
je pravilno usmjeren na slijedeći način:

    Odaberite jedan ili više odgovora:
    a) float (*ptrFunc)(int, int) = func(int a, int b);
    b) float (*ptrFunc)(int, int) = &func;
    c) float (*ptrFunc)(int, int) = &func(int a, int b);
    d) float (*ptrFunc)(int, int) = func;

    Odgovor: b), d)

----------------------------------------------------------------------
float (*ptrFunc)(int, int) = func(int a, int b)
ovo je pozivanje funkcije nema smisla
----------------------------------------------------------------------
flaot (*ptrFunc)(int, int) = &func;
Ovo je točno, proslijeđivanje adrese funkcije
----------------------------------------------------------------------
float (*ptrFunc)(int, int) = &func(int a, int b)
Pozivanje funkcije i onda uzmianje njezine adrese??
Nema smisla
----------------------------------------------------------------------
float(*ptrFunc)(int, int ) = func();
Ime funkcije predstavlja adresu same funkcije, tako da se Ime
može proslijediti
----------------------------------------------------------------------
*/