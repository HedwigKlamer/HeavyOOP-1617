#include "ParticleFactory.h"

ParticleFactory::PartcleFactory() {
}

ParticleFactory* ParticleFactory::theOne = 0;

ParticleFactory* ParticleFactory::instance() {
	if (!theOne) {
		theOne = new ParticleFactory();
	}
	return ParticleFactory::theOne;
}

Particle* ParticleFactory::emit() {
	Particle* newParticle;
	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}
	newParticle->setColours(ofColor::white, inner, outer);
	return newParticle;
}

void ParticleFactory::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleFactory::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void ParticleFactory::setColours(ofColor innerColour, ofColor outerColour) {
	inner = innerColour;
	outer = outerColour;
}

