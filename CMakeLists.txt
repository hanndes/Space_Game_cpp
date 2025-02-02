cmake_minimum_required(VERSION 3.16)
project(SPACE_GAME)

# Derleyici standardını belirleme
set(CMAKE_CXX_STANDARD 11)  # C++11 kullanıyoruz

# Tüm kaynak dosyaları
set(SOURCE_FILES
        main.cpp
        Galaxy.cpp
        Blackhole.cpp
        DwarfPlanet.cpp
        GasGiantPlanet.cpp
        Object.cpp
        Planet.cpp
        SpaceShuttle.cpp
        Source.cpp
)

# Yürütülebilir dosya oluşturma
add_executable(SPACE_GAME ${SOURCE_FILES})
