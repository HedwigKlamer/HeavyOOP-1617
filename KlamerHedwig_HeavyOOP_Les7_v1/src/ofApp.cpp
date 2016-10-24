#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);
    emitter = ParticleEmitter::instance();
    emitter->setOrigin(200, 200);
    emitter->setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
    emitter->setCurvingParticleRatio(0.1);
	emitter->setup();
}

void ofApp::update() {
    for (unsigned int i = 0; i < particles.size(); ++i) {
        particles[i]->move();
    }

    if (ofGetFrameNum() % 5 == 0) {
        Particle* freshParticle = emitter->emit();
        particles.push_back(freshParticle);
    }
	
	emitter->move();

    reaper.cleanup(particles);

    ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
    for (unsigned int i = 0; i < particles.size(); ++i) {
        particles[i]->draw();
    }
}

void ofApp::keyPressed(int key) {
}