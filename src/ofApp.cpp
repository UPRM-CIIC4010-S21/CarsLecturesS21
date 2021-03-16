#include <cstdlib>
#include <iostream>
#include <vector>

#include "ofApp.h"
#include "Car.h"
#include "PoliceCar.h"
#include "Truck.h"
#include "Dog.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){

    int laneHeight = 40;
    num_cars = ofGetWindowHeight() / laneHeight;
    int laneY = 0;
    for (int i = 0; i < num_cars; i++)
    {
        if (i % 4 == 0)
        {
            racers.push_back(new PoliceCar(0, laneY, 1, 5));
        }
        else if (i % 4 == 1)
        {
            racers.push_back(new Car(0, laneY, 1, 5));
        }
        else if (i % 4 == 2)
        {
            racers.push_back(new Dog(0, laneY, 1, 5));
        }       
        else
        {
            racers.push_back(new Truck(0, laneY, 1, 5));
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
        if ((racers[i]->getDirection() > 0) && racers[i]->getXPos()+60 >= ofGetWindowWidth()) {
            racers[i]->setDirection(-1);
        }
        else if ((racers[i]->getDirection() < 0) && (racers[i]->getXPos() <=0)) {
            racers[i]->setDirection(1);
        }
        int randSpeed = rand() % racers[i]->getSpeed();
        racers[i]->setXPos(racers[i]->getXPos() + randSpeed * racers[i]->getDirection());

        if (racers[i]->getXPos() <= 0 && racers[i]->getDirection() < 0) {
            raceEnded = true;
        }

    }

    int maxDistance = (racers[0]->getDirection() > 0) ? racers[0]->getXPos() : (ofGetWidth() + ofGetWidth() - racers[0]->getXPos() - 60);
    int maxCar = 0;
    for (int i=1; i<num_cars; i++) {
        int distanceNextCar = (racers[i]->getDirection() > 0) ? racers[i]->getXPos() : (ofGetWidth() + ofGetWidth() - racers[i]->getXPos() - 60);
        if (distanceNextCar > maxDistance) {
            maxDistance = distanceNextCar;
            maxCar = i;
        }
    }
    currentMaxCar = maxCar;

    // c2.setXPos(ofGetWindowWidth()-70);
    // c2.setYPos(ofGetWindowHeight()-40);

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<num_cars; i++) {
        if (i == currentMaxCar) {
            racers[i]->draw(ofColor(255,0,0));
        }
        else {
            racers[i]->draw();
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
