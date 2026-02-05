
1. Memorija za spremanje neke varijable, će biti alocirana prilikom:

	Odaberite jedan ili više odgovora:
	a) Korištenje ključne riječi extern
	b) Inicijalizacija varijable
	c) Definiranja varijable
	d) Deklariranja varijable

	Odgovor: c) 
----------------------------------------------------------------
Definiranje varijable će uvijek zauzeti memoriju ----> int x;
----------------------------------------------------------------
Inicijaliziranje varijable će isto isto zauzeti memoriju
zato što je inicijalizacija definicija plus vrijednost
-------> int x = 4;
----------------------------------------------------------------
Deklaracija varijable neće alocirati memoriju za tu varijablu,
exter int x; ------> samo navodi kompajleru da je varijabla negdje
----------------------------------------------------------------
2. Programski kod "extern int var" kompajleru kaže da

	Odaberite jedan ili više odgovora:
	a) Da je varijabla definirana u nekoj drugoj datoteci
	b) Da se varijabl var mora koristiti samo u datoteci
	u kojoj je definirana
	c) Das se varijabla var mora koristiti u nekoj drugoj
	datoteci 
	d) Ništa od navedenog

	Odgovor: a)
----------------------------------------------------------------
	Govori kompjleru da varijabla postoji u nekoj drugoj datoteci
	ovdje se nalazi samo deklaracija. 
----------------------------------------------------------------
	Ključna riječ static bi opisivala svojstvo, da je varijabla
	vidljiva samo u tom file-u.
----------------------------------------------------------------
3. Koja je od sljedećih deklaracija varijabli netočna:
   Odaberite jedan ili više odgovora: 
   a) unsigned float f;
   b) long int b;
   c) short float c;
   d) unsigned long int e;
   e) unsigned long double d;
   f) float a = 4.5;

   Odgovor: a), c), e)
----------------------------------------------------------------
   Float ne može biti tipa unsigned, unsigned vrijedi samo za
   cijelobrojne tipove
----------------------------------------------------------------
   Float nema short varijante, postoje samo float, double, long
   double
-----------------------------------------------------------------
   Double i long double ne mogu biti unsigned
---------------------------------------------------------------- 
4. Definicija predstavlja zauzimanje fizičkog prostora za
   neku varijablu, a može uključivati i inicijalizaciju.

   Odaberite jedan odgovor:
   a) Točno
   b) Netočno

   Odgovor: a)
----------------------------------------------------------------
5. Definicija varijable mora uključivati i njezinu inicijalizaciju

   Odaberite jedan odgovor:
   a) Točno
   b) Netočno

   Odgovor: b)
---------------------------------------------------------------
/**/
