#pragma once


#include "ofMain.h"

class Particle {
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

	Particle();

	void setup();

	virtual void move();

	void draw();

	void setColours(ofColor center, ofColor inner, ofColor outer);
};