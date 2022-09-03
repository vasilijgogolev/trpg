#pragma once
#include <memory>
#include "saveController.h"
#include "imguiRenderer.h"

class game {
public:
	game() = default;
	~game() = default;
	
	void draw();
	void initialize();
	void terminate();
private:
	std::shared_ptr<saveController> mySaveFile;
	std::shared_ptr<imguiRenderer> myRenderer;
	bool initialized = false;
};
