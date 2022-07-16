#pragma once
#include <string>
#include <list>
#include <vector>

using namespace std;

class Criminal
{

private:
	string name;
	string surname;
	string nickname;
	string height;
	string hair—olor;
	string eye—olor;
	list<string> specialFeature;
	string citizenship;
	string birthPlace;
	string lastPlase;
	string criminalProfession;
	string lastCase;
	list<string> languages;

	Criminal(
		string name,
		string surname,
		string nickname,
		string height,
		string hair—olor,
		string eye—olor,
		list<string> specialFeature,
		string citizenship,
		string birthPlace,
		string lastPlase,
		string criminalProfession,
		string lastCase,
		list<string> languages
	);

};

