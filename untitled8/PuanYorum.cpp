#include "PuanYorum.h"

void PuanYorum::puanEkle(double yeniPuan, const std::string& yeniYorum) {
    puanlar.push_back(yeniPuan);
    yorumlar.push_back(yeniYorum);
}

double PuanYorum::ortalamaPuan() const {
    if (puanlar.empty()) {
        return 0.0;
    }

    double toplamPuan = 0.0;
    for (double puan : puanlar) {
        toplamPuan += puan;
    }

    return toplamPuan / puanlar.size();
}

void PuanYorum::puanYorumlariGoster() const {
    std::cout << "Puanlar ve Yorumlar:" << std::endl;
    for (size_t i = 0; i < puanlar.size(); ++i) {
        std::cout << "Puan: " << puanlar[i] << ", Yorum: " << yorumlar[i] << std::endl;
    }
    std::cout << "Ortalama Puan: " << ortalamaPuan() << std::endl;
}

