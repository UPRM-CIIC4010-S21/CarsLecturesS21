#pragma once

#include "ofMain.h"
#include "Car.h"
#include "Raceable.h"

class PoliceCar: public Car {

    public:

        PoliceCar(double x, double y, int direction, int speed): Car(x,y,direction,speed) {};

        PoliceCar(): Car(0,0,1,20) {};

        virtual void draw();
        virtual void draw(ofColor c);
        virtual bool equals(Raceable *vehicle);

};


