#pragma once
#include "Point.hpp"

class Wepon{
private:
    Point wepon;
    int clipCapacity;
    int currentClipCount;
public:
    Wepon(double lowerLimit,double upperLimit,int capacity);
    const Point &getWepon() const;
    int getClipCapacity() const;
    int getCurrentClipCount() const;
    void reload();
    void shoot();


};