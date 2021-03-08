#pragma once

#include "ofApp.h"
#include "Car.h"

class PoliceCar: public Car {

    public:

        PoliceCar(double x, double y, int direction, int speed): Car(x,y,direction,speed) {};

        PoliceCar(): Car(0,0,1,20) {};

        void draw();
        void draw(ofColor c);

};


