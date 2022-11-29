#pragma once
class Point{
private:
    double x;
    double y;
    double z;
public:

    Point();

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double getZ() const;

    void setZ(double z);

    void setValueToRandom(double lowerLimit,double upperLimit);

    double distance(double x,double y);

    double distance(double x,double y,double z);
};
