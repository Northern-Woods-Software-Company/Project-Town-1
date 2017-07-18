#include <iostream>

#include "changeLevelHappiness.h"
extern int levelHappiness;

using namespace std;

int changeLevelHappiness::iChangeLevelHappiness(int _levelHappiness) {
	_levelHappiness = -10 + rand() % 21;
	levelHappiness = _levelHappiness;
	return levelHappiness;
}

