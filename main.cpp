#include <iostream>

#include "Criminal.h"
#include "Squad.h"
//#include "Base.h"

using namespace std;

int main() {
    auto tempSquad = new Squad();

    tempSquad->addCriminal(new Criminal(
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
            "b"
    ));
    
    return 0;
}
