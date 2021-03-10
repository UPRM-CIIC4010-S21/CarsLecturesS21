#include <cstdlib>
#include <iostream>
#include <vector>

#include "ofApp.h"
#include "PoliceCar.h"
#include "Truck.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){

    int laneHeight = 40;
    num_cars = ofGetWindowHeight() / laneHeight;
    int laneY = 0;
    for (int i = 0; i < num_cars; i++)
    {
        if (i % 3 == 0)
        {
            cars.push_back(new PoliceCar(0, laneY, 1, 5));
        }
        else if (i % 3 == 1)
        {
            cars.push_back(new Car(0, laneY, 1, 5));
        }
        else
        {
            cars.push_back(new Truck(0, laneY, 1, 5));
        }
        laneY += laneHeight;
    }
    raceEnded = false;

}

//--------------------------------------------------------------
void ofApp::update(){

    // counter++;
    // if (counter % 60 == 0) {
    //     cout << counter  / 60 << endl;
    // }

    if (raceEnded) {
        return; 
    }

    // int speed = 5; // Car speed in pixels per tick (1/60th of a second)
    for (int i=0; i<num_cars; i++) {
        if ((cars[i]->getDirection() > 0) && cars[i]->getXPos()+60 >= ofGetWindowWidth()) {
            cars[i]->setDirection(-1);
        }
        else if ((cars[i]->getDirection() < 0) && (cars[i]->getXPos() <=0)) {
            cars[i]->setDirection(1);
        }
        int randSpeed = rand() % cars[i]->getSpeed();
        cars[i]->setXPos(cars[i]->getXPos() + randSpeed * cars[i]->getDirection());

        if (cars[i]->getXPos() <= 0 && cars[i]->getDirection() < 0) {
            raceEnded = true;
        }

    }

    int maxDistance = (cars[0]->getDirection() > 0) ? cars[0]->getXPos() : (ofGetWidth() + ofGetWidth() - cars[0]->getXPos() - 60);
    int maxCar = 0;
    for (int i=1; i<num_cars; i++) {
        int distanceNextCar = (cars[i]->getDirection() > 0) ? cars[i]->getXPos() : (ofGetWidth() + ofGetWidth() - cars[i]->getXPos() - 60);
        if (distanceNextCar > maxDistance) {
            maxDistance = distanceNextCar;
            maxCar = i;
        }
    }
    currentMaxCar = maxCar;

    c2.setXPos(ofGetWindowWidth()-70);
    c2.setYPos(ofGetWindowHeight()-40);

}

//--------------------------------------------------------------
void ofApp::draw(){

    c2.draw();

    for (int i=0; i<num_cars; i++) {
        if (i == currentMaxCar) {
            cars[i]->draw(ofColor(255,0,0));
        }
        else {
            cars[i]->draw();
        }
    }



}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
