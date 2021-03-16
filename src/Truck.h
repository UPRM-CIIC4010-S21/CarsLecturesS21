#pragma once

#include "ofApp.h"
#include "Vehicle.h"

class Truck: public Vehicle {

    public:

        Truck(double x, double y, int direction, int speed): Vehicle(x,y,direction,speed){};
        Truck(): Vehicle(0,0,1,20) {};

        virtual void draw();
        virtual void draw(ofColor c);

        virtual bool equals(Raceable *vehicle);

};

