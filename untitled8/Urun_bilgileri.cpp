#include "Urun_bilgileri.h"

Urun_bilgileri::Urun_bilgileri(const std::string _adi, const std::string _kodu, const std::string _aciklama, double _fiyat, const UrunOzellikleri& _ozellikler,const std::string _kategoriadi)
        : _adi(_adi), _kodu(_kodu), _aciklama(_aciklama), _fiyat(_fiyat), ozellikler(_ozellikler) {
}
std::string Urun_bilgileri::getAdi() const {
    return _adi;
}
std::string Urun_bilgileri::getKodu() const {
    return _kodu;
}
std::string Urun_bilgileri::getAciklama() const {
    return _aciklama;
}
std::string Urun_bilgileri::getKategoriadi() const {
    return _kategoriadi;
}
double Urun_bilgileri::getFiyat() const {
    return _fiyat;
}
UrunOzellikleri Urun_bilgileri::getOzellikler() const {
    return ozellikler;
}
void Urun_bilgileri::urun_bilgilerini_goster() const {
    std::cout << "Urun Adi: " << _adi << std::endl;
    std::cout << "Urun Kodu: " << _kodu << std::endl;
    std::cout << "Urun Aciklamasi: " << _aciklama << std::endl;
    std::cout << "Urun Fiyati: " << _fiyat << std::endl;
    std::cout << "Renk: " << getOzellikler().getRenk()
              << ", Marka: " << getOzellikler().getMarka() << std::endl;
}
