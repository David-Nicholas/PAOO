#include <iostream>
#include "Vehicul/vehicul.h"

int main() {
    Vehicul car1("123456789", "Sedan", "TM 45 VAS", "Toyota", "Red");
    std::cout << "Vehicul 1 (constructor cu parametrii): \n";
    car1.print();

    Vehicul car2; 
    std::cout << "\nVehicul 2 (constructor fara parametrii): \n";
    car2.print();

    car2.seteazaNumar_inmatriculare("TM 20 TOP");
    car2.seteazaCuloare("Albastra");
    std::cout << "\nVehicul 2 dupa modificari: \n";
    car2.print();

    Vehicul car3 = car1;  
    std::cout << "\nVehicul 3 (copie a vehicului 1): \n";
    car3.print();

    std::cout << "Vehicul 3 Serie: " << car3.getSerie() << "\n";
    std::cout << "Vehicul 3 Tip: " << car3.getTip() << "\n";

    Vehicul car4 = std::move(car2);
    std::cout << "\nVehicul 4 (mutat din Vehicul 2): \n";
    car4.print();
    std::cout << "Car 2 (after move):\n";
    car2.print();  

    car3.seteazaNumar_inmatriculare("B 240 CDC");
    car3.seteazaCuloare("Alb");
    std::cout << "\nVehicul 4 dupa schimbari numar si culoare: \n";
    car4.print();

    std::cout << "Vehicul 1 Numar Inmatriculare: " << car1.getNumar_inmatriculare() << "\n";
    std::cout << "Vehicul 2 Marca: " << car3.getMarca() << "\n";
    std::cout << "Vehicul 4 Culoare: " << car4.getCuloare() << "\n";

    return 0;
}
