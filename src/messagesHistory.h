#pragma once
#include <memory>
#include <string>
#include <vector>
#include "colorStruct.h"

#define ADD_MSG(X) history::getInstance()->addMessage(X)

struct messageStruct {
	std::string msg;
	colorStruct msgColor;
};

class messagesHistory {
public:
	messagesHistory() = default;
	~messagesHistory() = default;
	
	static messagesHistory* getInstance();
	static void cleanup();
	
	void addMessage(const messageStruct& msg);
	const std::vector<messageStruct>& getMessages();
	void clear();
private:
	std::vector<messageStruct> messages;
};
