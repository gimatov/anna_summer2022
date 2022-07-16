#include <iostream>

#include "Criminal.h"
#include "Squad.h"
#include "DB.h"

using namespace std;

int main() {
    auto tempDB = new DB();

    tempDB->addSquad(new Squad());

    tempDB->getSquads()[0]->addCriminal(new Criminal(
            "a",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b",
            "b"
    ));

    tempDB->find("Name", "Petya")->find("Height", "140")->get();
    
    return 0;
}
