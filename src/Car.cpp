#include "ofMain.h"
#include "Car.h"

void Car::draw(ofColor c)
{
    double x = this->getXPos();
    double y = this->getYPos();
    ofSetColor(c);
    // Draw body
    ofDrawRectangle(x + 0, y + 10, 60, 10);
    // Draw roof and windshields
    ofDrawLine(x + 10, y + 10, x + 20, y + 0);
    ofDrawLine(x + 20, y + 0, x + 40, y + 0);
    ofDrawLine(x + 40, y + 0, x + 50, y + 10);

    ofSetColor(ofColor(255,255,255));
    // Draw tires
    ofDrawCircle(x + 15, y + 25, 5);
    ofDrawCircle(x + 45, y + 25, 5);  
}

void Car::draw()
{
    this->draw(ofColor(255,255,255));
}

bool Car::equals(Raceable *vehicle)
{

    Car *c2 = dynamic_cast<Car *>(vehicle);
    if (c2 != nullptr) {
        return true;
    }
    return false;
}