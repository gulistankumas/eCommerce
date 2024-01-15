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
#include "MusteriUrunTavsiye.h"

int main() {
    // magaza nesnesi oluşturma
    Magaza magaza1("Ankara Caddesi No.12 ", "654-453", "Mustafa Yılmaz", "shop1");
    Magaza magaza2("Istanbul Caddesi No: 144", "555-1234", "Ahmet Yilmaz", "shop2");

    // Magaza bilgilerini gösterme
    magaza2.magaza_bilgilerini_goster();
    std::cout << " ---------------- " << std::endl;

    ETicaretPlatformu eTicaret;

    // musteri oluşturma

    Musteri musteri1("Ahmet", "Yilmaz", "05051234567", "Istanbul");
    Musteri musteri2("Ayse", "Demir", "05051234567", "Istanbul");
    musteri1.setTelefon(musteri1.getTelefon());
    musteri1.setTelefon(musteri2.getTelefon());

    eTicaret.musteriEkle(musteri1);
    eTicaret.musteriEkle(musteri2);

    // Müşteri bilgilerini ekrana yazdırma
    for (const auto &musteri: eTicaret.getMusteriler()) {
        musteri.musteriBilgileriniGoster();
    }
    std::cout << " ---------------- " << std::endl;

    //kategori oluşturma
    UrunKategori elektronik("Elektronik");
    UrunKategori giyim("Giyim");

    // urunlerin özelliklerini ekleme

    UrunOzellikleri laptopOzellikler("Siyah", "lenova");
    UrunOzellikleri telefonOzellikler("Siyah", "apple");
    UrunOzellikleri kulaklikOzellikler("Siyah", "jabra");
    UrunOzellikleri tshirtOzellikler("Siyah", "zara");
    UrunOzellikleri pantolonOzellikler("Siyah", "levis");

    // urun oluşturma
    Urun_bilgileri laptop("Laptop", "1", "Yuksek performansli tasinabilir bilgisayar.", 30000.0
           , laptopOzellikler,"Elektronik");
    Urun_bilgileri telefon("Telefon", "2", "Mobil iletisim icin akıllı telefon.",
                           1500.0  , telefonOzellikler,"Elektronik");
    Urun_bilgileri kulaklik("kulaklik", "3", "Yuksek ses kalitesi sunan kulak ici kulaklik", 1000.0,
                            kulaklikOzellikler ,"Elektronik");

    Urun_bilgileri tshirt("T-Shirt", "4", "Rahat ve sik tasarimli tshirt", 300.0,
                          tshirtOzellikler, "Giyim");
    Urun_bilgileri pantolon("Pantolon", "5", "Gunluk kullanim icin rahat pantolon", 100.0,
                            pantolonOzellikler,"Giyim");


    elektronik.urunEkle(laptop);
    elektronik.urunEkle(telefon);
    elektronik.urunEkle(kulaklik);


    giyim.urunEkle(tshirt);
    giyim.urunEkle(pantolon);
    giyim.urunleriListele();
    std::cout << " ---------------- " << std::endl;
    elektronik.urunleriListele();
    std::cout << " ---------------- " << std::endl;

    SiparisBilgileri siparis1(musteri1, magaza1, "2023-01-15");
    SiparisBilgileri siparis2(musteri2, magaza1, "2023-01-15");

    PuanYorum Laptop;
    PuanYorum puanYorum2;
    PuanYorum puanYorum3;

    Laptop.puanEkle(4.5, "Harika bir urun!");
    Laptop.puanEkle(2, "Kotu bir urun");

    SiparisUrunu urun1(laptop, 3, 30000.0, Laptop);
    SiparisUrunu urun2(telefon, 4, 1500.0, puanYorum2);
    SiparisUrunu urun3(kulaklik, 1, 1000.0, puanYorum3);
    SiparisUrunu urun4(tshirt, 4, 300.0, puanYorum2);
    SiparisUrunu urun5(pantolon, 4, 100.0, puanYorum2);

    siparis1.urunEkle(urun1);
    siparis1.urunEkle(urun2);
    siparis1.siparisDetaylariniYazdir();

    siparis2.urunEkle(urun4);


    std::cout << " ---------------- " << std::endl;

    //musteri bilgileri
    for (const auto &musteri: eTicaret.getMusteriler()) {
        if (musteri.getAdi() == "Ahmet") {
            siparis1.siparisDetaylariniYazdir();
        } else if (musteri.getAdi() == "Ayse") {
            siparis2.siparisDetaylariniYazdir();
        } else if (musteri.getAdi() == "Mehmet")

            std::cout << "   " << std::endl;
        std::cout << "  ---------------- " << std::endl;
    }
    std::cout << " ------------------------------------------------- " << std::endl;

    Laptop.puanYorumlariGoster();

    std::cout << "  ---------------- " << std::endl;

    laptop.urun_bilgilerini_goster();
    std::cout << "  ---------------- " << std::endl;

    //özelliklere göre arama
    UrunOzellikleri arananOzellikler("Siyah", "lenova");
    std::vector<Urun_bilgileri> bulunanUrunler = elektronik.ozelliklereGoreAra(arananOzellikler);

    std::cout << "\nAranan Ozelliklere Uygun Urunler:" << std::endl;
    for (const auto &urun: bulunanUrunler) {
        std::cout << "Urun Adi: " << urun.getAdi() << ", Fiyat: " << urun.getFiyat()
                  << ", Renk: " << urun.getOzellikler().getRenk()
                  << ", Marka: " << urun.getOzellikler().getMarka()
                  << std::endl;
    }
    std::cout << "  ---------------- " << std::endl;

    magaza1.urunler = {
            Urun_bilgileri("Laptop", "E001", "Yuksek kalitede laptop", 5000, UrunOzellikleri("siyah", "Lenovo"),
                           "elektronik"),
            Urun_bilgileri("Telefon", "E002", "256 gb telefon", 3000, UrunOzellikleri("siyah", "Apple"), "elektronik"),
            Urun_bilgileri("kulaklik", "E003", "kulakustu kulaklik", 1000, UrunOzellikleri("siyah", "Apple"), "elektronik"),
    };
    magaza2.urunler = {Urun_bilgileri("tshirt", "G001", "pamuklu tshirt", 300, UrunOzellikleri("siyah", "zara"), "giyim"),
                       Urun_bilgileri("pantolon", "G002", "yuksek kalite pantolon", 30, UrunOzellikleri("siyah", "zara"), "giyim")
    };

    //siparis gecmisi
    musteri1.gecmisSiparisler ={laptop,kulaklik};
    musteri2.gecmisSiparisler ={pantolon};

    // Müşteriye tavsiye edilen ürünleri al
    MusteriUrunTavsiye tavsiyeSistemi;
    std::vector<Urun_bilgileri> tavsiyeEdilenUrunler = tavsiyeSistemi.urun_tavsiye_et(musteri1, magaza1);
    std::vector<Urun_bilgileri> tavsiyeEdilenUrunler2 = tavsiyeSistemi.urun_tavsiye_et(musteri2, magaza2);

    // Tavsiye edilen ürünler
    std::cout << "Ahmet icin Tavsiye Edilen Urunler:\n";
        for (const auto& urun : tavsiyeEdilenUrunler) {
             std::cout <<  urun.getAdi() << " " << urun.getAciklama()<< std::endl;
    }
    std::cout << "  ---------------- " << std::endl;

    std::cout << "Ayse icin Tavsiye Edilen Urunler:\n";
    for (const auto& urun : tavsiyeEdilenUrunler2) {
        std::cout <<  urun.getAdi() << " " << urun.getAciklama()<< std::endl;
    }

    return 0;

}