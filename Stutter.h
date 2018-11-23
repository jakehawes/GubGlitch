#pragma once
#ifndef __STUTTER__
#define __STUTTER__
#include <math.h>
#include <vector>
#include "IPlugStructs.h"

extern double gTempo;
extern double gSampleRate;

class Stutter {
private:
	std::vector<double> deck;
	int deckLength;
	int c;
	bool isFull;
	const int sLength = 10;
	int weightA;
	int weightB;

public:
	void setLength(double division);
	double process(double input);
	inline void setActive(bool muted) { isActive = muted; }
	bool isActive;
	Stutter() :
		isActive(false),
		c(0),
		isFull(false) {
		;
	}
};

#endif