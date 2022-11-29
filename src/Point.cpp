#include <random>
#include "../Include/Point.hpp"

Point::Point() {
  x=0;
  y=0;
  z=0;
}

double Point::getX() const {
    return x;
}

void Point::setX(double x) {
    Point::x = x;
}

double Point::getY() const {
    return y;
}

void Point::setY(double y) {
    Point::y = y;
}

double Point::getZ() const {
    return z;
}

void Point::setZ(double z) {
    Point::z = z;
}
void Point::setValueToRandom(double lowerLimit, double upperLimit) {
    std::random_device rd;
    std::uniform_real_distribution<double> dist(lowerLimit,upperLimit);
    x=dist(rd);
    y=dist(rd);
    z=dist(rd);
}

double Point::distance(double x, double y) {
    double distanceX=((this->x-x));
    double distanceY=((this->y-y));
    return sqrt((pow(distanceX,2)+ pow(distanceY,2)));
}

double Point::distance(double x, double y, double z) {
    double distanceX=((this->x-x));
    double distanceY=((this->y-y));
    double distanceZ=((this->z-z));
    return sqrt((pow(distanceX,2)+ pow(distanceY,2)+pow(distanceZ,2)));
}


