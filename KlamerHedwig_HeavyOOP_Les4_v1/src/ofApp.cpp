#include "ofApp.h"

void ofApp::setup(){
	ofBackground(ofColor::black);

	factory1 = ParticleFactory();
	factory1.setOrigin(100, 100);
	factory1.setCurvingParticleRatio(0.1);
	//factory1.setColours(ofColor::red, ofColor::red);

	factory2 = ParticleFactory();
	factory2.setOrigin(400, 400);
	factory2.setCurvingParticleRatio(0.8);
	//factory2.setColours(ofColor::blue, ofColor::blue);
}

void ofApp::update(){
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}
	Particle* freshParticle = factory1.emit();
	particles.push_back(freshParticle);

	Particle* freshParticle2 = factory2.emit();
	particles.push_back(freshParticle2);
}

void ofApp::draw(){
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}

