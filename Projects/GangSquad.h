#pragma once
#include "Criminal.h"
class GangSquad
{
	list<Criminal> accomplices;
	string title;

	void addCriminal(Criminal* man) {
		this->accomplices.push_back(*man);
	}
};
