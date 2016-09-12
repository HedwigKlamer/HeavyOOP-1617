#include "ofParticle.h"

ofParticle::ofParticle() {
	radius = ofRandom(0, 20);
	position = ofPoint(ofGetWidth() / 2,
						ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(-0.5, 0.5), 
					ofRandom(-0.5, 0.5));
	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(128, 255, 255, 15);
}

void ofParticle::setup() {
	
}

void ofParticle::move() {
	position += speed;
}

void ofParticle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);

}
