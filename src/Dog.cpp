#include "ofMain.h"
#include "Dog.h"

Dog::Dog(double x, double y, int direction, int speed)
{
    coordinates[0] = x;
    coordinates[1] = y;
    myDirection = direction;
    mySpeed = speed;
    imageFwd.load("DogForward.png");
    imageRev.load("DogReversed.png");
}

void Dog::draw(){

    if (myDirection > 0) {
        imageFwd.draw(coordinates[0], coordinates[1], 40, 30);
    }
    else
    {
        imageRev.draw(coordinates[0], coordinates[1], 40, 30);
    }

}

void Dog::draw(ofColor c)
{

}

bool Dog::equals(Raceable *v2)
{
    Dog *c2 = dynamic_cast<Dog *>(v2);
    if (c2 != nullptr) {
        return true;
    }
    return false;}