#include "ParticleEmitter.h"
#include "CurvingParticle.h"

ParticleEmitter* ParticleEmitter::instance() {
    if (!theOnlyOne) {
        theOnlyOne = new ParticleEmitter();
    }
    return theOnlyOne;
}

ParticleEmitter::ParticleEmitter() {
}

Particle* ParticleEmitter::emit() {
    Particle* newParticle;
	/*
    if (ofRandom(1) > (1 - curvingParticleRatio)) {
        newParticle = new CurvingParticle(originX, originY);
    } else {
        newParticle = new Particle(originX, originY);
    }*/
    
	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(position.x, position.y);
	}
	else {
		newParticle = new Particle(position.x, position.y);
	}
	newParticle->setColours(ofColor::white, inner, outer);

    return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) {
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 4);
	originX = x;
    originY = y;
}

void ParticleEmitter::setup() {
	angle=0,5;
	speed = 0.01;
	radius = 200;
}

void ParticleEmitter::draw() {
	ofSetColor(ofColor(255, 255, 255, 255));
	ofDrawCircle(position.x, position.y, 15);
}

void ParticleEmitter::move() {
	position = ofPoint(ofGetWidth() / 2 + sin(angle)* radius, ofGetHeight() / 2 + cos(angle)* radius);
	angle = angle + speed;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}

ParticleEmitter* ParticleEmitter::theOnlyOne = 0;
