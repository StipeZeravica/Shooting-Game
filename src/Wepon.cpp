#include "../Include/Point.hpp"
#include "../Include/Wepon.hpp"


const Point &Wepon::getWepon() const {
    return wepon;
}

int Wepon::getClipCapacity() const {
    return clipCapacity;
}

int Wepon::getCurrentClipCount() const {
    return currentClipCount;
}
Wepon::Wepon(double lowerLimit, double upperLimit, int capacity) {
    wepon.setValueToRandom(lowerLimit,upperLimit);
    clipCapacity=capacity;
}
void Wepon::reload() {
    currentClipCount=clipCapacity;
}

void Wepon::shoot() {
    if(currentClipCount<=0){
        reload();
    }
    currentClipCount--;
}
