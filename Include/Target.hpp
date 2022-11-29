#pragma once
#include <string>
#include "../include/Point.hpp"

class Target{
private:
    Point upperRightPosition;
    Point bottomLeftPosition;
public:
    Target(double bottomLeftPositionBottomValue,double bottomLeftPositionUpperValue,double upperRightPositionBottomValue,double upperRightPositionUpperValue);
    void setTargetPosition(double upperLimit,double lowerLimit);

    const Point &getUpperRightPosition() const;

    const Point &getBottomLeftPosition() const;

    std::string isHit(bool checkIsTheTargetHit);
};