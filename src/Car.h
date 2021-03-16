#pragma once

#include "ofApp.h"
#include "Vehicle.h"
#include "Raceable.h"

class Car: public Vehicle {

    private:
        // double xPos;
        // double yPos;
        // int direction; // 1 if left-to-right; -1 if right-to-left; 0 if stopped
        // int speed; // In pixels per tick

    public:

        Car(double x, double y, int direction, int speed): Vehicle(x,y,direction,speed){};
        // { 
        //     this->xPos = x; this->yPos = y; this->direction = direction; this->speed = speed;
        // };
        Car(): Vehicle(0,0,1,20) {};
        //  { this->xPos = 0; this->yPos = 0; this->direction = 1; this->speed = 20; };

        // double getXPos() { return xPos; };
        // double getYPos() { return yPos; };
        // int getDirection() { return direction; };
        // int getSpeed() { return speed; };


        // void setXPos(double x) { this->xPos = x; };
        // void setYPos(double y) { this->yPos = y; };
        // void setDirection(int d) { this->direction = d; };
        // void setSpeed(int s) { this->speed = s; };

        virtual void draw();
        virtual void draw(ofColor c);

        virtual bool equals(Raceable *v2);

};

