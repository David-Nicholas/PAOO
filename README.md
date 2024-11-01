Tema constă într-o aplicație scrisă în c++ în cadrul căreia să se abordeze următoarele subiecte discutate:
1. build folosind cmake respectând structura discutată la laborator (3p)
2. încapsulare (1p)
3. inițializarea membrilor din constructor (1p)
4. eliberarea heap-ului în cadrul destructorului (1p)
5. suprascrierea copy constructor-ului (2p)
6. crearea unui move constructor (2p).
Pentru subpunctele 3-6 trebuie să ilustrați exemple reprezentative, care indică clar nevoia implementării acestor concepte (e.g., arătați de ce este nevoie de copy constructor și ce se poate întâmpla dacă nu este suprascris).

Output:

Vehicul 1 (constructor cu parametrii): 
Serie: 123456789
  Tip: Sedan
  Numar inmatriculare: TM 45 VAS
  Marca: Toyota
  Culoare: Red

Vehicul 2 (constructor fara parametrii): 
Serie: PARAMETRU LIPSA
  Tip: PARAMETRU LIPSA
  Numar inmatriculare: PARAMETRU LIPSA
  Marca: PARAMETRU LIPSA
  Culoare: PARAMETRU LIPSA

Vehicul 2 dupa modificari: 
Serie: PARAMETRU LIPSA
  Tip: PARAMETRU LIPSA
  Numar inmatriculare: TM 20 TOP
  Marca: PARAMETRU LIPSA
  Culoare: Albastra

Vehicul 3 (copie a vehicului 1): 
Serie: 123456789
  Tip: Sedan
  Numar inmatriculare: TM 45 VAS
  Marca: Toyota
  Culoare: Red
Vehicul 3 Serie: 123456789
Vehicul 3 Tip: Sedan

Vehicul 4 (mutat din Vehicul 2): 
Serie: PARAMETRU LIPSA
  Tip: PARAMETRU LIPSA
  Numar inmatriculare: TM 20 TOP
  Marca: PARAMETRU LIPSA
  Culoare: Albastra
Car 2 (after move):
Serie: PARAMETRU LIPSA
  Tip: PARAMETRU LIPSA
  Numar inmatriculare: PARAMETRU LIPSA
  Marca: PARAMETRU LIPSA
  Culoare: PARAMETRU LIPSA

Vehicul 4 dupa schimbari numar si culoare: 
Serie: PARAMETRU LIPSA
  Tip: PARAMETRU LIPSA
  Numar inmatriculare: TM 20 TOP
  Marca: PARAMETRU LIPSA
  Culoare: Albastra
Vehicul 1 Numar Inmatriculare: TM 45 VAS
Vehicul 2 Marca: Toyota
Vehicul 4 Culoare: Albastra
