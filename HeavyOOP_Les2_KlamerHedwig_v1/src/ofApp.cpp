#include "ofApp.h"
#include "ofParticle.h"

//--------------------------------------------------------------
void ofApp::setup(){
	part1 = ofParticle();
}

//--------------------------------------------------------------
void ofApp::update(){
	part1.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
	part1.draw();
}

/*
void keyPressed(int key); {

}
*/
