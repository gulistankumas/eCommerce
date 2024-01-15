#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <set>
#include "Urun_bilgileri.h"

class Musteri {
private:
    std::string _adi;
    std::string _soyadi;
    std::string _telefon;
    std::string _adres;

public:
    Musteri(const std::string& _adi, const std::string& _soyadi, const std::string& _telefon, const std::string& _adres);
    // Getter fonksiyonları
    std::string getAdi() const;
    std::string getSoyadi() const;
    std::string getTelefon() const;
    std::string getAdres() const;


    void setTelefon(const std::string& yeniTelefon);
    void musteriBilgileriniGoster() const;
    std::vector<Urun_bilgileri> gecmisSiparisler;
    std::set<std::string> gecmisSiparisKategorileri;
};
