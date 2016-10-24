#pragma once


#include "Particle.h"

class ParticleEmitter {
    public:
        static ParticleEmitter* instance();

        void setOrigin(int x, int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(ofColor innerColour, ofColor outerColor);

		void move();
		void draw();
		void setup();

        Particle* emit();

		ofPoint position;
		float angle;
		float speed;
		int radius;


    private:
        ParticleEmitter();

        int originX;
        int originY;
        float curvingParticleRatio;
        ofColor inner;
        ofColor outer;

        static ParticleEmitter* theOnlyOne;
};

