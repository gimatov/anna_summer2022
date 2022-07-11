//
// Created by kp on 10.07.2022.
//

#ifndef ANNASUMMER2022_CRIMINAL_H
#define ANNASUMMER2022_CRIMINAL_H

#include <string>
#include <map>
#include <vector>

using namespace std;

enum class CriminalProperty {
    Surname,
    Name,
    Nickname,
    Height,
    DateOfBirth,
    HairColor,
    EyeColor,
    Citizenship,
    BirthPlace,
    LastPlace,
    CriminalProfession,
    LastCase
};

class Criminal {
    map<CriminalProperty, string> properies;
    vector<string> SpecialFeatures;
    vector<string> Languages;

public:
    Criminal(
            string surname,
            string name,
            string nickname,
            string height,
            string dateOfBirth,
            string hairColor,
            string eyeColor,
            string citizenship,
            string birthPlace,
            string lastPlace,
            string criminalProfession,
            string lastCase
    );

    static CriminalProperty strToProperty(const string& s);

    string getValue(string param);
    bool eqValue(string param, string value);
};


#endif //ANNASUMMER2022_CRIMINAL_H
