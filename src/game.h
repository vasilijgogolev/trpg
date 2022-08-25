#pragma once
#include <memory>
#include "save.h"
#include "renderer.h"

class game {
public:
	game() = default;
	~game() = default;
	
	void draw();
	void initialize();
	void terminate();
private:
	std::shared_ptr<save> mySaveFile;
	std::shared_ptr<renderer> myRenderer;
	bool initialized = false;
};
