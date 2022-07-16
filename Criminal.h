//
// Created by kp on 10.07.2022.
//

#ifndef SUMMER2022_CRIMINAL_H
#define SUMMER2022_CRIMINAL_H

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
    LastCase,
    SpecialFeatures,
    Languages
};

class Criminal {
    map<CriminalProperty, string> properties;

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
            string lastCase,
            string specialFeatures,
            string languages
    );

    static CriminalProperty strToProperty(const string& s);

    string getValue(string param);
    bool eqValue(const string& param, const string& value);
};


#endif //SUMMER2022_CRIMINAL_H
