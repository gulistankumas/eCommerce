cmake_minimum_required(VERSION 3.26)
project(eticaretnew2)

set(CMAKE_CXX_STANDARD 14)

include_directories(untitled8)

add_executable(eticaretnew2
        untitled8/ETicaretPlatformu.cpp
        untitled8/ETicaretPlatformu.h
        untitled8/Magaza.cpp
        untitled8/Magaza.h
        untitled8/main.cpp
        untitled8/Musteri.cpp
        untitled8/Musteri.h
        untitled8/PuanYorum.cpp
        untitled8/PuanYorum.h
        untitled8/SiparisBilgileri.cpp
        untitled8/SiparisBilgileri.h
        untitled8/SiparisUrunu.cpp
        untitled8/SiparisUrunu.h
        untitled8/Urun_bilgileri.cpp
        untitled8/Urun_bilgileri.h
        untitled8/UrunKategori.cpp
        untitled8/UrunKategori.h
        untitled8/UrunOzellikleri.cpp
        untitled8/UrunOzellikleri.h
        untitled8/MusteriUrunTavsiye.cpp)
