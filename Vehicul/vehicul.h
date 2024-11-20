#include <string>

class Vehicul
{

private:
    char *serie;
    char *tip;
    char *numar_inmatriculare;
    char *marca;
    char *culoare;

public:
    Vehicul(const char *serie, const char *tip, const char *numar_inmatriculare, const char *marca, const char *culoare);
    Vehicul(const char *serie);
    Vehicul& operator=(const Vehicul& vehicul); // Copy assignment operator
    Vehicul& operator=(Vehicul&& vehicul);  
    Vehicul();
    ~Vehicul();
    void print() const;
    const char* getSerie() const;
    const char* getTip() const;
    const char* getNumar_inmatriculare() const;
    const char* getMarca() const;
    const char* getCuloare() const;
    void seteazaNumar_inmatriculare(const char *numar_inmatriculare_nou);
    void seteazaCuloare(const char *culoare_noua);
};