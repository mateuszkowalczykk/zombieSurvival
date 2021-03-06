#include "myFunctions.hpp"

float calculateAngle(sf::Vector2f firstPos, sf::Vector2f secondPos){
    float angle = atan((secondPos.x-firstPos.x)/(firstPos.y-secondPos.y))*180/pi;

    if(secondPos.y>firstPos.y){
        if(secondPos.x>firstPos.x){
            angle+=180;
        }else{
            angle-=180;
        }
    }
    return angle;
}

float cordsDistance(sf::Vector2f firstPos, sf::Vector2f secondPos){
    return pow(pow(firstPos.x- secondPos.x, 2) + pow(firstPos.y - secondPos.y, 2), 0.5);
}
