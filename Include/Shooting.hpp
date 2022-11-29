#pragma once
#include "Point.hpp"
#include "Target.hpp"
#include <vector>

class Shooting{
private:
    Point bullet;
    std::vector<Target> targets;
public:

    void generateShootingRange(int numberOfTargets);
    const std::vector<Target> &getTargets() const;
    void shootingGame(bool isHit,int numberOfShots,double lowerLimitForBullet,double upperLimitForBullet);
    //void game();

};