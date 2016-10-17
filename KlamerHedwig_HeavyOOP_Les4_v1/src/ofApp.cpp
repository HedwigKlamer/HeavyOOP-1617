#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	factory1 = ParticleFactory::instance();
	factory1->setOrigin(300, 300);
	factory1->setCurvingParticleRatio(0.1);
	factory1->setColours(ofColor(125, 125, 200, 127), ofColor(200, 255, 255, 15), ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15),ofColor(255, 125, 200, 127), ofColor(255, 255, 255, 15));

	//factory1->setColours(ofColor(125, 125, 200, 127), ofColor(200, 255, 255, 15));
	//factory1->setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
	//factory1->setColours(ofColor(255, 125, 200, 127), ofColor(255, 255, 255, 15));
	

}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}
	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = factory1->emit();
		particles.push_back(freshParticle);

	}
	reaper.cleanup(particles);
	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
		//factory1.setColours(ofColor::red, ofColor::red);
	}
}



