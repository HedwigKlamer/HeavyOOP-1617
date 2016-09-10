#pragma once

#include "ofMain.h"

#define AmountColor 2
#define AmountGlow 2

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		//ball 
		int BallRadius; // deze radius varieert in de tijd dat ze bestaan waardoor het een soort knipperlicht is
		ofColor color[i];
		
		//glow 
		int GlowRadius[i];
		void OpacityGlow;
		


		//spawning 
		float x; //spawning place, is een random afwijking van de SpawnCircleRadius
		float y;
		int SpawnCircleRadius; //Ballen worden in een rondje gespawnt, dit rondje heeft een radius
		float SpawnCircleSpeed;//Om de seconde spawnen er nieuwe ballen 

		//moving variables
		float SpeedX;
		float SpeedY;

		//deleting variables
		float DeadTime; // de ballen verdwijnen naar een paar seconde, deze tijd geeft aan hoelang ze in beeld blijven



		

		
		
};
