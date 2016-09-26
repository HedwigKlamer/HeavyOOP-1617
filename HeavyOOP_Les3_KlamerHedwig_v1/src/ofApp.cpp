
#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		setRandomColour(particles[i]);
	}
}

void ofApp::update() {
	for (int i = 0; i < MAX_PARTICLES; ++i) {
		particles[i]->move();
	}
}

void ofApp::draw() {
	for (int i = 0; i < MAX_PARTICLES; ++i) {
		particles[i]->draw();
	}
}

void ofApp::keyPressed(int key) {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		setRandomColour(particles[i]);
	}
}

void ofApp::setRandomColour(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random <= 7) {
		particle->setColours(ofColor::white, ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
	}
	else if (random > 7) {
		particle->setColours(ofColor::white, ofColor(114, 240, 55, 127), ofColor(185, 250, 155, 15));
	}
}
