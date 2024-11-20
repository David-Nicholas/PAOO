Sa se scrie un proiect C++ care sa acopere principalele probleme descrise in urmatoarele item-uri, din cartea Effective C++:

Item 10: Have assignment operators return a reference to *this.
    Operatorii de atribuire (operator=) trebuie să returneze o referință la obiectul curent (*this) pentru a permite apeluri în lanț (a = b = c).

Item 11: Handle assignment to self in operator=.
    În operatorul de atribuire, trebuie verificat dacă obiectul atribuit este același cu obiectul curent (this == &other) pentru a evita ștergerea greșită a datelor proprii.

Item 12: Copy all parts of an object.
    Toate componentele unui obiect (inclusiv cele alocate dinamic) trebuie copiate corect în constructorul de copiere și operatorul de atribuire, folosind copii independente pentru a evita conflictele între obiecte.