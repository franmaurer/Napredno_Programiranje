#include <stdio.h>
#include <string.h>
int main()
{
	char p[20];
	char *s = "string";
	int length = strlen(s);
	int i;
	for (i = 0; i < length; i++)
		p[i] = s[length - i];
	printf("%s", p);

	/*
	a) gnirts
	b) gnirt
	c) string
	d) Nista od navedenog
	
	Odgovor: d) Nista od navedenog
--------------------------------------------------------------------- 
    char *s = "string"; -> string ima 6 znakova
---------------------------------------------------------------------
    len = strlen(s), len ima vrijednost 6
------------------------------------------------ ---------------------
    char p[20], neinicijalizirano lokalno polje od 20 karaktera,
    sadrži garbage vrijednosti
---------------------------------------------------------------------
    for loop ide od, i = 0, do i = 6,
---------------------------------------------------------------------
    Iteration (i)   s[length - i]	Calculation	    Result
        0	        s[6 - 0]		    s[6]         '\0' (Null Terminator)
        1	        s[6 - 1]	        s[5]	    ' g'                              
        2	        s[6 - 2]	        s[4]	    'n'
        3	        s[6 - 3]	        s[3]	    'i'
        4	        s[6 - 4]	        s[2]	    'r'
        5	        s[6 - 5]	        s[1]	    't'
---------------------------------------------------------------------
    Prvi znak koji je spremljen u P je zadnji iz s, odnosno
    \0, znak koji je na indeksu duljine stringa, će uvijek biti \0
---------------------------------------------------------------------
    P[0] = \0
---------------------------------------------------------------------
    printf("%s", p) -> Printaj string, od adrese prvog elementa, do \0,
    posto je to prvi element, u P[] stringu, ne prinaj Nista
---------------------------------------------------------------------
    s slovo iz *s stringa, nikada ne bude spremljen ou novi P[] string, jer 
    for petlja ide do indeksa 5 ( len(6) - 1))
---------------------------------------------------------------------
    P[] bi nastavio citati sve znakove, jer nema rucno dodanog \0
    doslo bi citanja znakova u garbage memoriji
	*/
	return 0;
}
