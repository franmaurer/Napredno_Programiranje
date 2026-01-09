/* Pokazivaču definarom kao int* const p, ne može se mijenjati što:

   a) Adresa i vrijednost varijable na koju pokazuje
   b) Vrijednost varijable na koju pokazuje
   c) Tip varijable na koju pokazuje
   d) Adresa varijable na koju pokazuje
   
   Odgovor: d)

--------------------------------------------------------------------------
1. int* const p, znači da je adresa na koju pokazivač pokazuje konstantna
--------------------------------------------------------------------------
Adresa p se ne može mijenjati
--------------------------------------------------------------------------
Vrijendost na koju pokazuje se može mijenjati
--------------------------------------------------------------------------
2. const int* p, znači da podatak na koji pokazivač imena p
pokazuje se ne može mijenjati
--------------------------------------------------------------------------
const int* const p --------> ni adresa ni podataka na koji pokazivač
pokazuje se ne može mijenjati
*/