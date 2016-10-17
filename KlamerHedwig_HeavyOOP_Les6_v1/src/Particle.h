#pragma once


#include "ofMain.h"
#define MAX_LIFETIME 50
class Particle {
public:
	Particle(int startX, int startY);

	virtual void move();

	void draw();

	void setColours(ofColor center, ofColor inner, ofColor outer);
	
	bool isDead();

protected:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

};