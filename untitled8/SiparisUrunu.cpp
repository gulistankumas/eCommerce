#include "SiparisUrunu.h"

SiparisUrunu::SiparisUrunu(const Urun_bilgileri& urun, int adet, double birimFiyat, const PuanYorum& _urunPuanYorum)
        : siparisUrunu(urun), siparisAdedi(adet), birimFiyat(birimFiyat), urunPuanYorum(_urunPuanYorum) {}

const Urun_bilgileri& SiparisUrunu::geturun() const {
    return siparisUrunu;
}
int SiparisUrunu::getSiparisAdedi() const {
    return siparisAdedi;
}
double SiparisUrunu::toplamTutar() const {
    return birimFiyat * static_cast<double>(siparisAdedi);
}
void SiparisUrunu::puanEkle(double yeniPuan, const std::string& yeniYorum) {
    urunPuanYorum.puanEkle(yeniPuan, yeniYorum);
}
