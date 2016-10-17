#pragma once
#include "Particle.h"
#include "CurvingParticle.h"

class ParticleFactory{
public:
	void setOrigin(int x, int y);

	void setCurvingParticleRatio(float ratio);

	//void setColours(ofColor innerColour, ofColor outerColour);
	void setColours(ofColor innerColourA, ofColor outerColourA, ofColor innerColourB, ofColor outerColourB, ofColor innerColourC, ofColor outerColourC);


	static ParticleFactory* instance();
	Particle* emit();


private:
	ParticleFactory();
	int colorPick;
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;

	static ParticleFactory* theOne;

};

