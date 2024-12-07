#include "subsystems/manipulator.hpp"
using namespace okapi;

const int8_t clampPort = 0;

okapi::Motor clamp = okapi::Motor(clampPort);