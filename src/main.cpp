#include <iostream>
#include "../include/Shooting.hpp"
int main() {
    Shooting shooting;
    shooting.generateShootingRange(6);
    shooting.shootingGame(false,10,200,500);
    return 0;
}
