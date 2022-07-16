//
// Created by kp on 11.07.2022.
//

#include "DB.h"

#include <utility>

DB::DB() = default;

void DB::addSquad(Squad *squad) {
    this->squads.push_back(squad);
}

vector<Squad *> DB::getSquads() {
    return this->squads;
}

CriminalList *DB::find(string param, string val) {
    return (new CriminalList(this->squads))->find(std::move(param), std::move(val));
}
