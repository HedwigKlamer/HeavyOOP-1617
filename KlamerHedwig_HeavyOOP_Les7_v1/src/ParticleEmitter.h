#pragma once


#include "Particle.h"

class ParticleEmitter {
    public:
        static ParticleEmitter* instance();

        void setOrigin(int x, int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(ofColor innerColour, ofColor outerColor);

        Particle* emit();

    private:
        ParticleEmitter();

        int originX;
        int originY;
        float curvingParticleRatio;
        ofColor inner;
        ofColor outer;

        static ParticleEmitter* theOnlyOne;
};

