#include "UrunOzellikleri.h"

UrunOzellikleri::UrunOzellikleri(const std::string& _renk, const std::string& _marka)
        : renk(_renk), marka(_marka) {}
std::string UrunOzellikleri::getRenk() const {
    return renk;
}
std::string UrunOzellikleri::getMarka() const {
    return marka;
}