#include "ofApp.h"

void ofApp::setup(){
	ofBackground(ofColor::black);

	factory1 = ParticleFactory();
	factory1.setOrigin(100, 100);
	factory1.setCurvingParticleRatio(0.1);
	factory1.setColours(ofColor(255, 125, 200, 127), ofColor(255, 255, 255, 15));

	factory2 = ParticleFactory();
	factory2.setOrigin(400, 400);
	factory2.setCurvingParticleRatio(0.8);
	factory2.setColours(ofColor(125, 125, 200, 127),ofColor(200, 255, 255, 15));

	factory3 = ParticleFactory();
	factory3.setOrigin(800, 400);
	factory3.setCurvingParticleRatio(1.0);
	factory3.setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
}

void ofApp::update(){
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}
	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = factory1.emit();
		particles.push_back(freshParticle);

		Particle* freshParticle2 = factory2.emit();
		particles.push_back(freshParticle2);

		Particle* freshParticle3 = factory3.emit();
		particles.push_back(freshParticle3);
	}
	reaper.cleanup(particles);
	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw(){
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
		//factory1.setColours(ofColor::red, ofColor::red);
	}
}

