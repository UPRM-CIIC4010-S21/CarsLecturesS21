#include "ofApp.h"
#include "Truck.h"

void Truck::draw(ofColor c)
{
    double x = this->getXPos();
    double y = this->getYPos();
    ofSetColor(c);
    // Draw body
    ofDrawRectangle(x + 0, y + 10, 60, 10);

    if (this->getDirection() > 0)
    {
        // Draw roof and windshield
        ofDrawLine(x + 40, y + 0, x + 50, y + 10);

        // Draw cargo box
        ofDrawRectangle(x + 0, y + 0, 40, 20);
    }
    else
    {
        // Draw roof and windshield
        ofDrawLine(x + 10, y + 10, x + 20, y + 0);

        // Draw cargo box
        ofDrawRectangle(x + 20, y + 0, 40, 20);
    }

    ofSetColor(ofColor(255,255,255));
    // Draw tires
    ofDrawCircle(x + 15, y + 25, 5);
    ofDrawCircle(x + 45, y + 25, 5);  
}

void Truck::draw()
{
    this->draw(ofColor(255,255,255));
}

bool Truck::equals(Raceable *vehicle)
{
    Truck *c2 = dynamic_cast<Truck *>(vehicle);
    if (c2 != nullptr) {
        return true;
    }
    return false;
}