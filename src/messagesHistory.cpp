#include "messagesHistory.h"

static messagesHistory* instance = nullptr;

messagesHistory* messagesHistory::getInstance() {
	if (!instance) {
		instance = new messagesHistory();
	}
	return instance;
}

void messagesHistory::cleanup() {
	delete instance;
	instance = nullptr;
}

void messagesHistory::addMessage(const messageStruct& msg) {
	messages.emplace_back(msg);
}

const std::vector<messageStruct>& messagesHistory::getMessages() {
	return messages;
}

void messagesHistory::clear() {
	messages.clear();
}
