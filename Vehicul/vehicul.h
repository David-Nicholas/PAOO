#ifndef VEHICUL_H
#define VEHICUL_H

#include <string>
#include <iostream>

class Vehicul {
private:
    std::string serie = "\0";
    std::string tip = "\0";
    std::string numar_inmatriculare = "\0";
    std::string marca = "\0";
    std::string culoare = "\0";

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
