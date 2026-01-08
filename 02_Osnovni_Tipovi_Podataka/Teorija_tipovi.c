/*
Teorijska pitanja s ulaznih kolokvija za ovaj dio gradiva
-------------------------------------------------------------------
1.  int_16t predstavlja:
	a) Tip int koji se sastoji od najmanje 16 bita
	b) Tip int koji se sastoji od točno 16 bita
	c) Tip integer koji se sastoji od najviše 16 bita
	d) Ništa od navedenog
	
	Odogovor: b)
-------------------------------------------------------------------
1.  Prednost ovog tipa podatka je ta, da će on, uvijek
	biti 16 bita, int tip podatka, može ovisiti o platformi
	ovako definiranjem podtake, nema iznenađenja
	kod binarnih protokola, datotetka, mrežne komunikacije i
	hardverskih registara
-------------------------------------------------------------------
2.  U Limits.h biblioteci su:
	Odaberite jedan odgovor:
	a) Definirane max i min vrijednosti koje mogu biti
	pohranjene u uređenom tipu
	b) Definirani max i min broj redaka koda
	c) Ništa od navedegog
	d) Definirani tipovi podataka koji se smiju koristi u kod

	Odgovor: a)
-------------------------------------------------------------------
2.1  U limits.h biblioteci, nema funkcija, jedini sadržaj su makroi.
	 Omogoćuje sigurnost i prenosivost koda, jer programer u svakom
	 trenu može saznati veličinu, tipova podataka.
-------------------------------------------------------------------
2.2  limits.h je identičan na Windowsima, Linuxima i
	 embeded sustavima.
-------------------------------------------------------------------
3. Što označava 0x ispred broja?
   Primjer: 0x632, Odaberite jedan odgovor
   
   a) Broj je zapisan u heksadekadskom obliku
   b) Broj ima veliku važnost
   c) Broj je zapisan u oktalnom obliku
   d) Ništa od navedenog

   Odgovor: a)
-------------------------------------------------------------------
4. int32_t -> isto kao i gore int16_t
-------------------------------------------------------------------
5. Koju ekstenziju imaju kompajlirane statičke
   biblioteke?

   Odaberite jedan odgovor:
   a) .so
   b) .a
   c) .h
   d) Ništa od navedenog

   Odgovor: b)
-------------------------------------------------------------------
5.1  Na Linux/Unix sustavima, koji koriste GCC/CLang,
	 fajl poput lib.a, predstavlja statičku biblioteku.
	 .a = archive, statička biblioteka je zapravo, arhiva .o
	 objektnih fajlova.

     Tipično se naprave preko ar (archiver) naredbe.
-------------------------------------------------------------------
5.2  Na windows sustavima, .lib, može biti statička
	 biblioteka, ili je to import library za .dll
	 Razlika je u sadržaju file-a.
-------------------------------------------------------------------
5.3  Prednost, korištenja statičkih biblioteka je, da
	 nema runtime depend., i lakše je distribuirati .exe 
-------------------------------------------------------------------     
6. U koji se od navedenih slučaja, varijabla treba označiti
   volatile?
	
   Odaberite jedan ili više odgovora:
   a) Kada se radi konverzija veće preciznosti u varijablu manje preciznosti
   b) Kada je potrebno organizirati memorijske resurse
   c) Kada su periferni registri(I/O), portovi memorijski mapirani
   d) Kada je u varijablu potrebno pohraniti nepoznatu vrijednost
   e) Kada različite niti, pristupaju globalnim varijablama

   Odgovor: c), e)
-------------------------------------------------------------------
6.1 Volatile = varijabla se može promijeniti u svakome trenu
	iaoko ju moj kod ne mijenja. Glavni cilj je da se isključe
	određene optimizacije, koje bi inače uništili naš program, kada
	komunicira s hardware-om i interruptima.

	1. Meomorijski mapirani registri
	a) Pri memorijski mapiranim registrima, u embeded sustavima, često
	se direktno u hardware, pišu/čitaju podatci.
	b) Status nekog registra se može promijeniti, 0->1, nakon
	neke hardwareske pobude.
	c) Ako petlja prolazi preko registra, dok se događa promjena
	kompajler bi mogao pomisliti, "ovo se nikad ne mijenja, spremiti
	ću ovo u registar", rezultat ove optimizacije bi bilo da petlja
	postane beskonačna jer procesor nikada zapravo ne provjeri stanje
	u pravoj memoriji.
	
	2. Varijable promijenjene interruptima
	a) Ako postoji globalni flag, koji je promijenjen interruptom,
	poput timera ili pritiska gumba i on je provučen kroz main(),
	kompajler ne može vidjeti da će se interrupt pojaviti, 
	pretpostavlja da se globalni flag nikada neće promijeniti, jer
	nema koda u main() petlji da ga promijeni.
	b) Rezultat: Kompajler može odoptimizirati provjeru
	globalnog flaga poptpuno, te prepostaviti
	da se originalna vrijednost neće nikad mijenjati.

	3. Zajedničke globalne varijable u višenitnom programiranju
	Ako jedna nit, čeka na drugu nit, da promijeni, globalni
	flag "Ready"
	a) Problem: Nit koja čeka, može spremiti Ready flag u registar
	radi brzine
	b) Oprez: Volatile omogućuje, da je varijabla samo read iz memorije
	ne pruža potpunu sigurnost niti, poput atomicsa i mutex-a
--------------------------------------------------------------------------------------	
6.3 Kako volatile radi, korak po korak
	a) Kompajleru je zabranjeno da cacheira, vrijednosti u
	registar, svaki puta kada koristi varijablu, u kodu,
	strojni kod će učitati i spremiti vrijednost u RAM.
	b) Sprječva uništavanje instrukcija. Ako korisnik upiše
	vrijednost u varijablu, dva puta za redom, kompajler
	ne može obrisati prvi write.(*) U hardware-u, prvi write može 
	biti okiač za neku naredbu, stoga ostaje
		*"Zašto pisati u registar 10 pa 20 na isto mjesto,
		Napisati ću samo jednom 20"
	c) Premještanje, kompajler ne može, pomaknuti volatile
	read/write naredbu preko neko druge read/write naredbe,
	u asemblerskom kodu.

*/
