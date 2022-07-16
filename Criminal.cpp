//
// Created by kp on 10.07.2022.
//

#include "Criminal.h"

#include <utility>

using namespace std;

Criminal::Criminal(
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
) {
    this->properties[CriminalProperty::Surname]            = move(surname);
    this->properties[CriminalProperty::Name]               = move(name);
    this->properties[CriminalProperty::Nickname]           = move(nickname);
    this->properties[CriminalProperty::Height]             = move(height);
    this->properties[CriminalProperty::DateOfBirth]        = move(dateOfBirth);
    this->properties[CriminalProperty::HairColor]          = move(hairColor);
    this->properties[CriminalProperty::Citizenship]        = move(citizenship);
    this->properties[CriminalProperty::BirthPlace]         = move(birthPlace);
    this->properties[CriminalProperty::LastPlace]          = move(lastPlace);
    this->properties[CriminalProperty::CriminalProfession] = move(criminalProfession);
    this->properties[CriminalProperty::LastCase]           = move(lastCase);
    this->properties[CriminalProperty::EyeColor]           = move(eyeColor);
    this->properties[CriminalProperty::SpecialFeatures]    = move(specialFeatures);
    this->properties[CriminalProperty::Languages]          = move(languages);

}

CriminalProperty Criminal::strToProperty(const string& s) {
    if (s == "Surname")
        return CriminalProperty::Surname;
    if (s == "Name")
        return CriminalProperty::Name;
    if (s == "Nickname")
        return CriminalProperty::Nickname;
    if (s == "Height")
        return CriminalProperty::Height;
    if (s == "DateOfBirth")
        return CriminalProperty::DateOfBirth;
    if (s == "HairColor")
        return CriminalProperty::HairColor;
    if (s == "Citizenship")
        return CriminalProperty::Citizenship;
    if (s == "BirthPlace")
        return CriminalProperty::BirthPlace;
    if (s == "LastPlace")
        return CriminalProperty::LastPlace;
    if (s == "CriminalProfession")
        return CriminalProperty::CriminalProfession;
    if (s == "LastCase")
        return CriminalProperty::LastCase;
    if (s == "EyeColor")
        return CriminalProperty::EyeColor;
    if (s == "SpecialFeatures")
        return CriminalProperty::SpecialFeatures;
    if (s == "Languages")
        return CriminalProperty::Languages;

    return CriminalProperty::Surname;
}

bool Criminal::eqValue(const string& param, const string& value) {
    return this->properties[Criminal::strToProperty(param)] == value;
}
