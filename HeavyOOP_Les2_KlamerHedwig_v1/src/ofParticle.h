#pragma once

#include "ofMain.h"

class ofParticle
{
public:

	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime; //long is een grote int


	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;
	
	ofParticle();

	void setup();
	void move();
	void draw();
};

