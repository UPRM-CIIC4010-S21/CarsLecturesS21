
#pragma once

#include <string>

#include "ofMain.h"
#include "Raceable.h"
#include "Animal.h"

class Dog: public Raceable, public Animal {

    private:
    double coordinates[2];
    int myDirection;
    int mySpeed;
    ofImage imageFwd;
    ofImage imageRev;

    public:
        Dog(double x, double y, int direction, int speed);

        virtual double getXPos() { return coordinates[0]; };
        virtual double getYPos() { return coordinates[1]; };
        virtual int getDirection() { return myDirection; };
        virtual int getSpeed() { return mySpeed; };

        virtual void setXPos(double x) { coordinates[0]=x; };
        virtual void setYPos(double y) { coordinates[1]=y; };
        virtual void setDirection(int d) { myDirection = d; };
        virtual void setSpeed(int s) { mySpeed = s; };

        virtual void draw();
        virtual void draw(ofColor c);

        virtual bool equals(Raceable *v2);

        virtual void eat();
        virtual string yell();

};
