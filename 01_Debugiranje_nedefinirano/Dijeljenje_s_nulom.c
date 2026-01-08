#include <stdio.h>
int main (void)
{
	unsigned x = 5;
	unsigned y = 0;
	unsigned z = x / y;
	printf("Division OK");
	return 0;
}
/*  Odgovor: Ilegalno dijeljenje s nulom

------------------------------------------------------------------------------------------------
1)  Program definira dvije varijable unsigned (zapravo unsigned short) tipa, i inicijalizira
    unsigned short može predstavljasti vrijednosti od [0, 65325]
------------------------------------------------------------------------------------------------
1.1) Dijeljenje s nulom je nedefinirano ponašanje, za bilo koji cijelobrojni tip, na većini,
modernih procesora, dijeljenje s nulom, uzrokuje trenutno zaustavljanje tenutni prekid rada
------------------------------------------------------------------------------------------------
1.2) Kada procesor otkrije instrukciju dijeljenja s nulom, umjesto, nastavljanja dalje, on šalje
signal operacijskom sustavu da je došlo do iznimke
------------------------------------------------------------------------------------------------
1.3) Print linija, obzirom da je došlo da velike greške, u liniji koda iznad, ova linija koda,
se vjerojatno na većini sustava neće nikada izvršiti, vjetojatno će operacijski sustav,
nasilno ugasiti program, s porukom, Floating point exception ili Segmentation fault
------------------------------------------------------------------------------------------------
*/