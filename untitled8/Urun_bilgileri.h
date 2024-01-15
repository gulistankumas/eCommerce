#pragma once
#include <iostream>
#include <string>
#include "UrunOzellikleri.h"

class Urun_bilgileri {
private:
    std::string _adi;
    std::string _kodu;
    std::string _aciklama;
    double _fiyat;
    UrunOzellikleri ozellikler;
    std::string _kategoriadi;

public:
    Urun_bilgileri(const std::string _adi, const std::string _kodu, const std::string _aciklama, double _fiyat, const UrunOzellikleri& _ozellikler,const std::string _kategoriadi);

    std::string getAdi() const;
    std::string getKodu() const;
    std::string getAciklama() const;
    double getFiyat() const;
    UrunOzellikleri getOzellikler() const;
    std::string getKategoriadi() const;

    void urun_bilgilerini_goster() const;

   // == operatörü
    bool operator==(const Urun_bilgileri& other) const {
        // İki nesnenin eşit olup olmadığını burada kontrol edin
        return this->getAdi() == other.getAdi() && this->getKategoriadi() == other.getKategoriadi();
        // Diğer özellikleri de ekleyebilirsiniz.
    }

    // != operatörü
    bool operator!=(const Urun_bilgileri& other) const {
        return !(*this == other);
    }
};


