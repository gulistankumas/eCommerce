#pragma once
#include <vector>
#include <iostream>
#include "Musteri.h"
#include "UrunKategori.h"

class ETicaretPlatformu {
public:
    void musteriEkle(const Musteri &musteri);
    const std::vector<Musteri> &getMusteriler() const;

private:
    std::vector<Musteri> musteriler;

};
