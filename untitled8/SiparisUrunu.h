#pragma once

#include "Urun_bilgileri.h"
#include "PuanYorum.h"

class SiparisUrunu {
public:
    SiparisUrunu(const Urun_bilgileri& urun, int adet, double birimFiyat, const PuanYorum& _urunPuanYorum);

    const Urun_bilgileri& geturun() const;
    int getSiparisAdedi() const;
    double toplamTutar() const;
    void puanEkle(double yeniPuan, const std::string& yeniYorum);
    std::string kategoriAdi;

private:
    const Urun_bilgileri siparisUrunu;
    int siparisAdedi;
    double birimFiyat;
    PuanYorum urunPuanYorum;
};


