#include "Magaza.h"

Magaza::Magaza(const std::string& _adres, const std::string& _telefon, const std::string& _yetkiliKisi, const std::string& _magazaAdi)
        : _adres(_adres), _telefon(_telefon), _yetkili_kisi(_yetkiliKisi), _magaza_adi(_magazaAdi) {
}

std::string Magaza::getAdres() const {
    return _adres;
}

std::string Magaza::getTelefon() const {
    return _telefon;
}

std::string Magaza::getYetkiliKisi() const {
    return _yetkili_kisi;
}

std::string Magaza::getMagazaAdi() const {
    return _magaza_adi;
}


void Magaza::magaza_bilgilerini_goster() const {
    std::cout << "Magaza Adresi: " << _adres << std::endl;
    std::cout << "Magaza Telefonu: " << _telefon << std::endl;
    std::cout << "Yetkili Kisi: " << _yetkili_kisi << std::endl;
    std::cout << "Magaza Adi: " << _magaza_adi << std::endl;
}
