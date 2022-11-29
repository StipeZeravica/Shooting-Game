
#include "../Include/Point.hpp"
#include "../Include/Target.hpp"

const Point &Target::getUpperRightPosition() const {
    return upperRightPosition;
}

const Point &Target::getBottomLeftPosition() const {
    return bottomLeftPosition;
}

Target::Target(double bottomLeftPositionBottomValue,double bottomLeftPositionUpperValue,double upperRightPositionBottomValue,double upperRightPositionUpperValue){
    upperRightPosition.setValueToRandom(upperRightPositionBottomValue,upperRightPositionUpperValue);
    bottomLeftPosition.setValueToRandom(bottomLeftPositionBottomValue,bottomLeftPositionUpperValue);
}

std::string Target::isHit(bool checkIsTheTargetHit){
    if(checkIsTheTargetHit){
        return "Target was hit!!!";
    }
    return "Missed!!!";
}

