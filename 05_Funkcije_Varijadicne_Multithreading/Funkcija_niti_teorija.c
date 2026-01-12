/*  a) Prednosti niti nad procesima:
----------------------------------------------------------------------------------------------------------
	1. Kreiranje niti je brže
	2. Prebacivanje konteksta između niti je brže
	3. Nit može biti zaustavljena brže
	4. Komunikacija između niti je brža
----------------------------------------------------------------------------------------------------------
	b) Funkcije u pthread biblioteci
----------------------------------------------------------------------------------------------------------
	1. pthread_create, koristi se za kreiranje niti
----------------------------------------------------------------------------------------------------------
	2. pthread_exit, koristi za zaustavljanje niti
----------------------------------------------------------------------------------------------------------
	3. pthread_join, koristi se za čekanje niti za završetak
----------------------------------------------------------------------------------------------------------
	4. pthread_self, koristi se za dobivanje ID-a niti
----------------------------------------------------------------------------------------------------------
	5. pthread_equal, koristi se za usporedbu niti
----------------------------------------------------------------------------------------------------------
	6. pthread_cancel, koristi se za slanje zahtjeva za ukidanje niti
----------------------------------------------------------------------------------------------------------
	7. pthread_detach, koristi se za odvajanje niti, što znači da se resursi mogu
	otpustiti nakon što se nit prekine
----------------------------------------------------------------------------------------------------------
	Data races - dvije niti pokušavaju promijeniti varijablu u isto vrijeme
	moguće UB
----------------------------------------------------------------------------------------------------------
	Mutex - mutual exclusion, zaključava pristup podatcima, primjer s toaletom,
	otključavanje i zaključvanje
----------------------------------------------------------------------------------------------------------
	c) Primjena niti
----------------------------------------------------------------------------------------------------------
	1. Izvršavamo zadatke koji se mogu raditi paralelno - Na primjer, prilikom obrade
	velike količine zadataka, više niti istovremeno, može obrađivati različite dijelove
	tih podataka
----------------------------------------------------------------------------------------------------------
	2. Program treba ostati responzivan - na primjer, u grafičkom sučelju (GUI), jedna niti može
	ažurirati sučelje, dok druga obavlja pozadinske zadatke, kako bi korisničko sučelje
	ostalo responzivno
----------------------------------------------------------------------------------------------------------
	3. Čekanje na vanjske resurse, kada program čeka na odgovor od mreže, ili od U/I uređaja, 
	druga nit, može nastaviti rad, dok glavna nit, čeka na odgovor
----------------------------------------------------------------------------------------------------------
	4. Obrada u realnom vremenu, u aplikacijama, koje zahtjevaju, brzinu, poput igara ili sustava za 
	upravljanje procesima, različite niti mogu paralelno, pratiti različite aspekte sustava.
----------------------------------------------------------------------------------------------------------
*/
