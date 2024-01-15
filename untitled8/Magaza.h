#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Urun_bilgileri.h"

class Magaza {
private:
    std::string _adres;
    std::string _telefon;
    std::string _yetkili_kisi;
    std::string _magaza_adi;

public:
    Magaza(const std::string& _adres, const std::string& _telefon, const std::string& _yetkiliKisi, const std::string& _magazaAdi);

    std::string getAdres() const;
    std::string getTelefon() const;
    std::string getYetkiliKisi() const;
    std::string getMagazaAdi() const;


    void magaza_bilgilerini_goster() const;
    std::vector<Urun_bilgileri> urunler;
};

