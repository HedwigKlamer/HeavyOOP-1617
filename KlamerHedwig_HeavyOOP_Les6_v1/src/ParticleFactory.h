#pragma once
#include "Particle.h"
#include "CurvingParticle.h"

class ParticleFactory{
public:
	void setOrigin(int x, int y);

	void setCurvingParticleRatio(float ratio);

	void setColours(ofColor innerColour, ofColor outerColour);

	static PartcleFactory* instance();
	Particle* emit();


private:
	ParticleFactory();
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;

	static ParticleFactory* theOne;

};

