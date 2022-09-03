#include "gameController.h"
#include "messagesHistory.h"

void game::initialize() {
	if (initialized) {
		return;
	}
	
	mySaveFile = std::make_shared<saveController>();
	mySaveFile->initialize();
	
	myRenderer = std::make_shared<imguiRenderer>();
	
	initialized = true;
}

void game::draw() {
	if (!initialized) {
		initialize();
	}
	
	myRenderer->draw();
}

void game::terminate() {
	messagesHistory::cleanup();
}
