#include "ETicaretPlatformu.h"

void ETicaretPlatformu::musteriEkle(const Musteri &musteri) {
    musteriler.push_back(musteri);
}

const std::vector<Musteri> &ETicaretPlatformu::getMusteriler() const {
    return musteriler;
}
