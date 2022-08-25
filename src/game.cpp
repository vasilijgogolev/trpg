#include "game.h"

void game::initialize() {
	if (initialized) {
		return;
	}
	
	mySaveFile = std::make_shared<save>();
	mySaveFile->initialize();
	
	myRenderer = std::make_shared<renderer>();
	
	initialized = true;
}

void game::draw() {
	if (!initialized) {
		initialize();
	}
	
	myRenderer->draw();
}

void game::terminate() {
	
}
