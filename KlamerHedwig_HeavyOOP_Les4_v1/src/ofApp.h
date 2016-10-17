#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleFactory.h"
#include "CurvingParticle.h"
#include "ParticleReaper.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		vector<Particle*> particles;

		ParticleFactory* factory1;
		ParticleReaper reaper;
};
