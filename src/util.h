#ifndef UTIL_H
#define UTIL_H

#include "SDL.h"
#include <iostream>
#include <string>
#include <utility>
#include <filesystem>  
// ^^^ This might need to be <experimental/filesystem> to compile under GCC, depending on the GCC version used!
#include <unordered_map>
#include <random>
#include <vector>
#include <memory>

// Utility functions:
void ThrowError(std::string msg);

// Global Variables:
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
namespace FS = std::filesystem;  
// ^^^ This might need to be std::experimental::filesystem to compile under GCC, depending on the GCC version used!

struct IntVector2 {
	IntVector2() : _x(0), _y(0) {}
	IntVector2(int x, int y) { _x = x; _y = y; }
	int _x;
	int _y;
};

#endif