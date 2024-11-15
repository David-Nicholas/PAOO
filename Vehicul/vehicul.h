#ifndef VEHICUL_H
#define VEHICUL_H

#include <string>
#include <iostream>

class Vehicul {
private:
    std::string serie;
    std::string tip;
    std::string numar_inmatriculare;
    std::string marca;
    std::string culoare;

public:
    Vehicul(const std::string &serie, const std::string &tip, const std::string &numar_inmatriculare, 
            const std::string &marca, const std::string &culoare);

    Vehicul(const std::string &serie);

    Vehicul();

    Vehicul(const Vehicul &vehicul);
    Vehicul(Vehicul &&vehicul);

    ~Vehicul() = default;

    void print() const;
    const std::string& getSerie() const;
    const std::string& getTip() const;
    const std::string& getNumar_inmatriculare() const;
    const std::string& getMarca() const;
    const std::string& getCuloare() const;

    void seteazaNumar_inmatriculare(const std::string &numar_inmatriculare_nou);
    void seteazaCuloare(const std::string &culoare_noua);
};

#endif
