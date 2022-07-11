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
        string lastCase
) {
    this->properies[CriminalProperty::Surname]            = move(surname);
    this->properies[CriminalProperty::Name]               = move(name);
    this->properies[CriminalProperty::Nickname]           = move(nickname);
    this->properies[CriminalProperty::Height]             = move(height);
    this->properies[CriminalProperty::DateOfBirth]        = move(dateOfBirth);
    this->properies[CriminalProperty::HairColor]          = move(hairColor);
    this->properies[CriminalProperty::Citizenship]        = move(citizenship);
    this->properies[CriminalProperty::BirthPlace]         = move(birthPlace);
    this->properies[CriminalProperty::LastPlace]          = move(lastPlace);
    this->properies[CriminalProperty::CriminalProfession] = move(criminalProfession);
    this->properies[CriminalProperty::LastCase]           = move(lastCase);
    this->properies[CriminalProperty::EyeColor]           = move(eyeColor);

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

    return CriminalProperty::Surname;
}
