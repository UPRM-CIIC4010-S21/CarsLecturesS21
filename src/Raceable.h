#pragma once

#include "ofMain.h"

class Raceable {

    public:

        virtual double getXPos() = 0;
        virtual double getYPos() = 0;
        virtual int getDirection() = 0;
        virtual int getSpeed() = 0;

        virtual void setXPos(double x) = 0;
        virtual void setYPos(double y) = 0;
        virtual void setDirection(int d) = 0;
        virtual void setSpeed(int s) = 0;

        virtual void draw() = 0;
        virtual void draw(ofColor c) = 0;

        virtual bool equals(Raceable *v2) = 0;

};


