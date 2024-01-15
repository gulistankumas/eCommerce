#include "Urun_bilgileri.h"
#include "UrunKategori.h"
#include "MusteriUrunTavsiye.h"
#include <algorithm>
#include <iostream>
#include <set>

std::vector<Urun_bilgileri> MusteriUrunTavsiye::urun_tavsiye_et(const Musteri& musteri, const Magaza& magaza) {
    std::set<std::string> satin_alinan_kategoriler;
    for (const auto& urun : musteri.gecmisSiparisler) {
        satin_alinan_kategoriler.insert(urun.getKategoriadi());
    }

    std::vector<Urun_bilgileri> tavsiye_edilen_urunler;
    for (const auto& urun : magaza.urunler) {
        if (satin_alinan_kategoriler.count(urun.getKategoriadi()) && std::find(musteri.gecmisSiparisler.begin(),musteri.gecmisSiparisler.end(),urun) == musteri.gecmisSiparisler.end()) {
            tavsiye_edilen_urunler.push_back(urun);
        }
    }

    return tavsiye_edilen_urunler;
}
