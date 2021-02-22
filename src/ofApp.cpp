#include <iostream>
#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    c1.setXPos(100); c1.setYPos(100);
}

//--------------------------------------------------------------
void ofApp::update(){

    counter++;
    if (counter % 60 == 0) {
        cout << counter  / 60 << endl;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    c2.setXPos(ofGetWindowWidth()-70);
    c2.setYPos(ofGetWindowHeight()-40);
    c1.draw();
    c2.draw();
    // drawCar(100, 100);
    // drawCar(ofGetWindowWidth()-70, ofGetWindowHeight()-40);

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
