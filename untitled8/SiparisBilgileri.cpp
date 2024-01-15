#include "SiparisBilgileri.h"

#include <iostream>

SiparisBilgileri::SiparisBilgileri(const Musteri& musteri, const Magaza& firma, const std::string& siparisTarihi)
        : musteriBilgileri(musteri), firmaBilgileri(firma), siparisTarihi(siparisTarihi) {}

void SiparisBilgileri::urunEkle(const SiparisUrunu& siparisUrunu) {
    urunler.push_back(siparisUrunu);
}

void SiparisBilgileri::siparisDetaylariniYazdir() const {
    std::cout << "Siparisi olusturan musteri : " << musteriBilgileri.getAdi() << std::endl;
    std::cout << "Siparis Tarihi: " << siparisTarihi << std::endl;
    std::cout << "Firma Adi: " << firmaBilgileri.getMagazaAdi() << std::endl;
    std::cout << "\nSiparis Urunleri:" << std::endl;
    for (const auto& urun : urunler) {
        std::cout << "Urun Adi: " << urun.geturun().getAdi() << ", Adet: " << urun.getSiparisAdedi()
                  << ", Birim Fiyat: " << urun.geturun().getFiyat() << ", Toplam Tutar: " << urun.toplamTutar() << " TL" << std::endl;
    }
}