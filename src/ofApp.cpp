#include <iostream>
#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){


}

//--------------------------------------------------------------
void ofApp::update(){

    counter++;
    if (counter % 60 == 0) {
        cout << counter  / 60 << endl;
    }

    int speed = 5; // Car speed in pixels per tick (1/60th of a second)
    if (c1.getXPos()+60 < ofGetWindowWidth()) {
        c1.setXPos(c1.getXPos() + speed);
    }  

    c2.setXPos(ofGetWindowWidth()-70);
    c2.setYPos(ofGetWindowHeight()-40);

}

//--------------------------------------------------------------
void ofApp::draw(){

    c1.draw();
    c2.draw();

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
