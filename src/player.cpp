#include "player.h"
#include "constants.h"

characterWithAttributes::characterWithAttributes() {
	attributes[eAttributes::STRENGTH] = 5;
	attributes[eAttributes::AGILITY] = 5;
	attributes[eAttributes::INTELLECT] = 5;
}

void characterWithAttributes::setPlayerName(const std::string &name) {
	playerName = name;
}

std::string characterWithAttributes::getPlayerName() {
	return playerName;
}

void characterWithAttributes::initStat(bool first) {
	if (first) {
		attributes[eAttributes::HEALTH] = attributes[eAttributes::STRENGTH] * constants::HEALTH_MODIFIER;
		attributes[eAttributes::MANA] = attributes[eAttributes::INTELLECT] * constants::MANA_MODIFIER;
	}
	attributes[eAttributes::MAX_HEALTH] = attributes[eAttributes::STRENGTH] * constants::HEALTH_MODIFIER;
	attributes[eAttributes::MAX_MANA] = attributes[eAttributes::INTELLECT] * constants::MANA_MODIFIER;
	attributes[eAttributes::PROTECTION] = attributes[eAttributes::STRENGTH] * constants::PROTECTION_MODIFIER;
	attributes[eAttributes::DODGE] = attributes[eAttributes::AGILITY] * constants::DODGE_MODIFIER;
	attributes[eAttributes::CRIT_RATE] = attributes[eAttributes::AGILITY] * constants::CRIT_RATE_MODIFIER;
	attributes[eAttributes::CRIT_MODIFICATOR] = attributes[eAttributes::STRENGTH] * constants::CRIT_MODIFIER;
	attributes[eAttributes::MAGIC_DAMAGE] = attributes[eAttributes::INTELLECT] * constants::MAGIC_MODIFIER;
	attributes[eAttributes::PHYSICAL_DAMAGE] = attributes[eAttributes::STRENGTH] * constants::DAMAGE_MODIFIER;
	attributes[eAttributes::SPEED] = attributes[eAttributes::AGILITY] * constants::SPEED_MODIFIER;
}
