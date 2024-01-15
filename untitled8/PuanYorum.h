#pragma once

#include <iostream>
#include <vector>

class PuanYorum {
private:
    std::vector<double> puanlar;
    std::vector<std::string> yorumlar;

public:
    void puanEkle(double yeniPuan, const std::string& yeniYorum);
    double ortalamaPuan() const;
    void puanYorumlariGoster() const;
};