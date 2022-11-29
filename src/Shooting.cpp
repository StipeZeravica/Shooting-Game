#include "../include/Shooting.hpp"
#include <iostream>
const std::vector<Target> &Shooting::getTargets() const {
    return targets;
}
void Shooting::generateShootingRange(int numberOfTargets) {
    for(int i=0;i<numberOfTargets;i++){
        Target target(0,300,500,800);
        this->targets.push_back(target);
    }
}
void Shooting::shootingGame(bool isHit, int numberOfShots,double lowerLimitForBullet,double upperLimitForBullet) {
    std::string s="";
    bullet.setValueToRandom(lowerLimitForBullet,upperLimitForBullet);
    for(int i=0;i<numberOfShots;i++){
        for(Target e:this->targets){
            if (bullet.getX()>e.getBottomLeftPosition().getX()&&bullet.getX()<e.getUpperRightPosition().getX()&&
                bullet.getY()>e.getBottomLeftPosition().getY()&&bullet.getY()<e.getUpperRightPosition().getY()&&
                bullet.getZ()>e.getBottomLeftPosition().getZ()&&bullet.getZ()<e.getUpperRightPosition().getZ()){
                isHit=true;
                s=e.isHit(isHit);
                std::cout<<s<<std::endl;
                break;
            }
        }
    }
}

