#pragma once

#include <vector>

#include "ofMain.h"
#include "PoliceCar.h"


class ofApp : public ofBaseApp{

	public:
		long counter = 0;
		PoliceCar c1;
    	PoliceCar c2;
		vector<Car*> cars;
		int num_cars;
		bool raceEnded;
		int currentMaxCar;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
