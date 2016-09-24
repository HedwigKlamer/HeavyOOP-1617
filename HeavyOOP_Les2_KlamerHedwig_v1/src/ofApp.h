#pragma once

#include "ofMain.h"
#include "ofParticle.h"

#define MAX_PARTICLES 50

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		
		ofParticle part1[MAX_PARTICLES];
		void keyPressed(int key);
};
