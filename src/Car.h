#pragma once

class Car {

    private:
        double xPos;
        double yPos;

    public:

        Car(double x, double y) { this->xPos = x; this->yPos = y; };
        Car() { this->xPos = 0; this->yPos = 0; };

        double getXPos() { return xPos; };
        double getYPos() { return yPos; };

        void setXPos(double x) { this->xPos = x; };
        void setYPos(double y) { this->yPos = y; };

        void draw();

};

