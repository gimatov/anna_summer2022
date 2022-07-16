#pragma once
#include "GangSquad.h"
class DB
{
	list<GangSquad> gangSquads;

	void addGangSquad(GangSquad* el);

	list<Criminal> findAtName(string name);
};

DB.addGangSquad(new GangSquad())

