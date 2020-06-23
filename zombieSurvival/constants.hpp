#ifndef constants_hpp
#define constants_hpp
#include <cmath>
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

enum class weapond {
    Handgun,
    Rifle,
    Shotgun,
    SniperRifle,
    Granade,
};
enum class itemType {
    health,
    granade,
    Shotgun,
    SniperRifle,
};
const float pi = M_PI;
const int windowHight = 900;
const int windowWidth = 1400;
const int constPlayerRadius = 13;
#endif

