#include <iostream>
#include <vector>

#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){

    num_cars = 10;
    int laneY = 0;
    for (int i=0; i<num_cars; i++) {
        cars.push_back(Car(0, laneY, 1, 5)); 
        laneY += 40;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    // counter++;
    // if (counter % 60 == 0) {
    //     cout << counter  / 60 << endl;
    // }

    // int speed = 5; // Car speed in pixels per tick (1/60th of a second)
    for (int i=0; i<num_cars; i++) {
        if ((cars[i].getDirection() > 0) && cars[i].getXPos()+60 >= ofGetWindowWidth()) {
            cars[i].setDirection(-1);
        }
        else if ((cars[i].getDirection() < 0) && (cars[i].getXPos() <=0)) {
            cars[i].setDirection(1);
        }
        cars[i].setXPos(cars[i].getXPos() + cars[i].getSpeed() * cars[i].getDirection());
    }

    c2.setXPos(ofGetWindowWidth()-70);
    c2.setYPos(ofGetWindowHeight()-40);

}

//--------------------------------------------------------------
void ofApp::draw(){

    c2.draw();

    for (int i=0; i<num_cars; i++) {
        cars[i].draw();
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