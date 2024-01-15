#pragma once


#include <string>

class UrunOzellikleri {
private:
    std::string renk;
    std::string marka;
public:
    UrunOzellikleri(const std::string& _renk, const std::string& _marka);

    std::string getRenk() const;
    std::string getMarka() const;
};

