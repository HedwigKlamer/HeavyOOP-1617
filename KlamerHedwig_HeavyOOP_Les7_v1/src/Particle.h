#pragma once


#include "ofMain.h"

//#define MAX_LIFETIME 150

class Particle {
    public:
        Particle(int startX, int startY);
        virtual ~Particle();

        virtual void move();

        void draw() const;

        void setColours(ofColor center, ofColor inner, ofColor outer);
		
		const int MAX_LIFETIME = 150;
        bool isDead();


    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
        long lifetime;

        ofColor centerColour = ofColor::white;
        ofColor innerColour;
        ofColor outerColour;

};

