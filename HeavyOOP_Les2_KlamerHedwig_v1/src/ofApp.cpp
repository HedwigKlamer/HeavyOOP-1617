#include "ofApp.h"
#include "ofParticle.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i] = ofParticle();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i].move();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i].draw();
	}
}


void ofApp::keyPressed(int key) {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i] = ofParticle();
	}
}

