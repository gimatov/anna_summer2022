//
// Created by kp on 10.07.2022.
//

#ifndef SUMMER2022_SQUAD_H
#define SUMMER2022_SQUAD_H

#include <vector>

#include "Criminal.h"

using namespace std;

class Squad {
    vector<Criminal*> criminals;
public:
    Squad();
    void addCriminal(Criminal* criminal);
    vector<Criminal*> gitCriminals();
};


#endif //SUMMER2022_SQUAD_H
