#pragma once
#include <iostream>
#include "ETicaretPlatformu.h"
#include "Magaza.h"
#include "Musteri.h"
#include "PuanYorum.h"
#include "SiparisBilgileri.h"
#include "SiparisUrunu.h"
#include "Urun_bilgileri.h"
#include "UrunKategori.h"
#include "UrunOzellikleri.h"

#pragma once


class MusteriUrunTavsiye {
public:
    std::vector<Urun_bilgileri> urun_tavsiye_et(const Musteri& musteri, const Magaza& magaza);

};
