#include "ofApp.h"
#include "PoliceCar.h"

void PoliceCar::draw(ofColor c)
{
    double x = this->getXPos();
    double y = this->getYPos(); 

    Car::draw(c);

    // Draw Biombo
    ofDrawCircle(x + 27, y - 3, 3);

}

void PoliceCar::draw()
{
    this->draw(ofColor(255,255,255));
}