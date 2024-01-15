#include "Musteri.h"



Musteri::Musteri(const std::string& _adi, const std::string& _soyadi, const std::string& _telefon, const std::string& _adres)
        : _adi(_adi), _soyadi(_soyadi), _telefon(_telefon), _adres(_adres) {}

// Getter fonksiyonları
std::string Musteri::getAdi() const {
    return _adi;
}
std::string Musteri::getSoyadi() const {
    return _soyadi;
}
std::string Musteri::getTelefon() const {
    return _telefon;
}
std::string Musteri::getAdres() const {
    return _adres;
}

void Musteri::setTelefon(const std::string& yeniTelefon) {
    // Telefon numarasının uzunluğunu kontrol eder
    if (yeniTelefon.length() == 11) {
        _telefon = yeniTelefon;
    } else {
        std::cerr << "Hata: Telefon numarasi 11 haneli olmalidir!" << std::endl;
    }
}


void Musteri::musteriBilgileriniGoster() const {
    std::cout << "Musteri Hesap Bilgileri:" << std::endl;
    std::cout << "Musteri Adi: " << _adi << std::endl;
    std::cout << "Musteri Soyadi: " << _soyadi << std::endl;
    std::cout << "Musteri Telefonu: "  << _telefon << std::endl;
    std::cout << "Musteri Adresi: "  << _adres << std::endl;
    std::cout <<" ---------------- "  << std::endl;
}
