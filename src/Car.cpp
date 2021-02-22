#include "ofApp.h"

void drawCar(double x, double y)
{
    // double x = xPos;
    // double y = yPos;
    ofSetColor(ofColor(255,255,255));
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