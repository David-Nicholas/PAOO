#include <iostream>
#include <cstring>
#include "vehicul.h"

Vehicul::Vehicul(const char *serie, const char *tip, const char *numar_inmatriculare, const char *marca, const char *culoare) {
    this->serie = new char[strlen(serie) + 1];
    strcpy(this->serie, serie);

    this->tip = new char[strlen(tip) + 1];
    strcpy(this->tip, tip);

    this->numar_inmatriculare = new char[strlen(numar_inmatriculare) + 1];
    strcpy(this->numar_inmatriculare, numar_inmatriculare);

    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);

    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

Vehicul::Vehicul(const char *serie) {
    this->serie = new char[strlen(serie) + 1];
    strcpy(this->serie, serie);

    this->tip = new char[1];
    this->tip[0] = '\0';

    this->numar_inmatriculare = new char[1];
    this->numar_inmatriculare[0] = '\0';

    this->marca = new char[1];
    this->marca[0] = '\0';

    this->culoare = new char[1];
    this->culoare[0] = '\0';
}

Vehicul& Vehicul::operator=(const Vehicul& vehicul) {
    if (this == &vehicul) { 
        return *this;
    }

    serie = new char[strlen(vehicul.serie) + 1];
    strcpy(serie, vehicul.serie);

    tip = new char[strlen(vehicul.tip) + 1];
    strcpy(tip, vehicul.tip);

    numar_inmatriculare = new char[strlen(vehicul.numar_inmatriculare) + 1];
    strcpy(numar_inmatriculare, vehicul.numar_inmatriculare);

    marca = new char[strlen(vehicul.marca) + 1];
    strcpy(marca, vehicul.marca);

    culoare = new char[strlen(vehicul.culoare) + 1];
    strcpy(culoare, vehicul.culoare);

    return *this;
}

Vehicul& Vehicul::operator=(Vehicul&& vehicul)  {
    if (this == &vehicul) { 
        return *this;
    }

    serie = vehicul.serie;
    tip = vehicul.tip;
    numar_inmatriculare = vehicul.numar_inmatriculare;
    marca = vehicul.marca;
    culoare = vehicul.culoare;

    vehicul.serie = nullptr;
    vehicul.tip = nullptr;
    vehicul.numar_inmatriculare = nullptr;
    vehicul.marca = nullptr;
    vehicul.culoare = nullptr;

    return *this;
}

Vehicul::Vehicul() : serie(nullptr), tip(nullptr), numar_inmatriculare(nullptr), marca(nullptr), culoare(nullptr) {}

Vehicul::~Vehicul() {
    delete[] serie;
    delete[] tip;
    delete[] numar_inmatriculare;
    delete[] marca;
    delete[] culoare;
}

void Vehicul::print() const {
    std::cout << "Serie: " << (serie ? serie : "PARAMETRU LIPSA") << std::endl;
    std::cout << "  Tip: " << (tip ? tip : "PARAMETRU LIPSA") << std::endl;
    std::cout << "  Numar inmatriculare: " << (numar_inmatriculare ? numar_inmatriculare : "PARAMETRU LIPSA") << std::endl;
    std::cout << "  Marca: " << (marca ? marca : "PARAMETRU LIPSA") << std::endl;
    std::cout << "  Culoare: " << (culoare ? culoare : "PARAMETRU LIPSA") << std::endl;
}

const char* Vehicul::getSerie() const {
    return serie;
}

const char* Vehicul::getTip() const {
    return tip;
}

const char* Vehicul::getNumar_inmatriculare() const {
    return numar_inmatriculare;
}

const char* Vehicul::getMarca() const {
    return marca;
}

const char* Vehicul::getCuloare() const {
    return culoare;
}

void Vehicul::seteazaNumar_inmatriculare(const char *numar_inmatriculare_nou) {
    delete[] numar_inmatriculare;
    numar_inmatriculare = new char[strlen(numar_inmatriculare_nou) + 1];
    strcpy(numar_inmatriculare, numar_inmatriculare_nou);
}

void Vehicul::seteazaCuloare(const char *culoare_noua) {
    delete[] culoare;
    culoare = new char[strlen(culoare_noua) + 1];
    strcpy(culoare, culoare_noua);
}