#pragma once

#include "ofMain.h"
#include "ofParticle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofParticle part1;
};
