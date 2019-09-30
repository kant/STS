#include "sts.hpp"


Plugin *pluginInstance;

void init(rack::Plugin *p) 
{
	pluginInstance = p;
		
	//p->addModel(modelSwitch2to1x11);
	p->addModel(modelOdyssey);
	p->addModel(modelIlliad);
	p->addModel(modelPolySEQ16);
	p->addModel(modelRingModulator);
	p->addModel(modelWaveFolder);
	p->addModel(modelVU_Poly);
	p->addModel(modelLFOPoly);
	p->addModel(modelLFOPolySP);
<<<<<<< HEAD
	p->addModel(modelMidiPlayer);
=======
	//p->addModel(modelChords);
	//p->addModel(GTX::Chords ::model);
	p->addModel(modelMidiPlayer);
	//p->addModel(modelDrumMap);
>>>>>>> 1af8a927e7e43b0e7b835ea001d985155d8ce09c
	
	

}


