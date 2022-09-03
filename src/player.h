#pragma once
#include <string>
#include <map>
#include "characterAttributes.h"

class characterWithAttributes {
public:
	characterWithAttributes();
	virtual ~characterWithAttributes() = default;
	
	void setPlayerName(const std::string& name);
	std::string getPlayerName();
	void initStat(bool first);
protected:
	std::map<eAttributes, float> attributes;
private:
	std::string playerName;
};
