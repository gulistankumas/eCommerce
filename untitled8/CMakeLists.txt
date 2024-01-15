cmake_minimum_required(VERSION 3.26)
project(untitled8)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled8 main.cpp
        UrunOzellikleri.cpp
        UrunKategori.cpp
        Urun_bilgileri.cpp
        SiparisUrunu.cpp
        SiparisBilgileri.cpp
        PuanYorum.cpp
        Musteri.cpp
        Magaza.cpp
        ETicaretPlatformu.cpp)
