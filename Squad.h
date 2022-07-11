//
// Created by kp on 10.07.2022.
//

#ifndef ANNASUMMER2022_SQUAD_H
#define ANNASUMMER2022_SQUAD_H

#include <vector>

#include "Criminal.h"

using namespace std;

class Squad {
    vector<Criminal> *criminals;
public:
    Squad();
    void addCriminal(Criminal* criminal);
};


#endif //ANNASUMMER2022_SQUAD_H
