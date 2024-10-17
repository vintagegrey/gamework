//
// Created by jimmy on 10/17/2024.
//

#ifndef GAMEWORK_UTIL_H
#define GAMEWORK_UTIL_H

#include <iostream>

#define ERROR(...) std::cerr << __FUNCTION__ << ", ln " << __LINE__ << ": " << __VA_ARGS__ << '\n'
#define ASSERT(_e, ...) if (!(_e)) { ERROR(__VA_ARGS__); exit(1); }

#endif //GAMEWORK_UTIL_H
