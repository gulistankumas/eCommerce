#pragma once
#include "Musteri.h"
#include "Magaza.h"
#include "SiparisUrunu.h"
#include "UrunKategori.h"

class SiparisBilgileri {
private:
    Musteri musteriBilgileri;
    Magaza firmaBilgileri;
    std::string siparisTarihi;
    std::vector<SiparisUrunu> urunler;

public:
    SiparisBilgileri(const Musteri& musteri, const Magaza& firma, const std::string& siparisTarihi);

    void urunEkle(const SiparisUrunu& siparisUrunu);

    void siparisDetaylariniYazdir() const;
};