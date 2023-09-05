//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

// Copies context of the header file
#include "car.h"
// But still include needed files
#include <vector>
#include "wheel.h"

#ifndef PRIMER_TRAILER_H
#define PRIMER_TRAILER_H


class trailer {
private:
    std::vector<car> Cars;
    std::vector<wheel> wheels;
};


#endif //PRIMER_TRAILER_H
