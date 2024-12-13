#include <iostream>
#include "vehicul.h"

Vehicul::Vehicul(const std::string &serie, const std::string &tip, const std::string &numar_inmatriculare, const std::string &marca, const std::string &culoare)
    : serie(serie), tip(tip), numar_inmatriculare(numar_inmatriculare), marca(marca), culoare(culoare) {}

Vehicul::Vehicul(const std::string &serie)
    : serie(serie), tip(""), numar_inmatriculare(""), marca(""), culoare("") {}

Vehicul::Vehicul() : serie(""), tip(""), numar_inmatriculare(""), marca(""), culoare("") {}

void Vehicul::print() const {
    std::cout << "Serie: " << (serie.empty() ? "PARAMETRU LIPSA" : serie) << std::endl;
    std::cout << "  Tip: " << (tip.empty() ? "PARAMETRU LIPSA" : tip) << std::endl;
    std::cout << "  Numar inmatriculare: " << (numar_inmatriculare.empty() ? "PARAMETRU LIPSA" : numar_inmatriculare) << std::endl;
    std::cout << "  Marca: " << (marca.empty() ? "PARAMETRU LIPSA" : marca) << std::endl;
    std::cout << "  Culoare: " << (culoare.empty() ? "PARAMETRU LIPSA" : culoare) << std::endl;
}

const std::string& Vehicul::getSerie() const {
    return serie;
}

const std::string& Vehicul::getTip() const {
    return tip;
}

const std::string& Vehicul::getNumar_inmatriculare() const {
    return numar_inmatriculare;
}

const std::string& Vehicul::getMarca() const {
    return marca;
}

const std::string& Vehicul::getCuloare() const {
    return culoare;
}

void Vehicul::seteazaNumar_inmatriculare(const std::string &numar_inmatriculare_nou) {
    numar_inmatriculare = numar_inmatriculare_nou;
}

void Vehicul::seteazaCuloare(const std::string &culoare_noua) {
    culoare = culoare_noua;
}
