#include "trygonometria.h"
#include <cmath>

#define pi 3.14

double degreemath::sin(double degree) {
         double rad = degree*(pi/180); 
         return std::sin(rad);
}

double degreemath::cos(double degree) {
         double rad = degree*(pi/180); 
         return std::cos(rad);
}

double degreemath::tan(double degree) {
         double rad = degree*(pi/180); 
         return std::tan(rad);
}

double degreemath::ctan(double degree) {
         double rad = degree*(pi/180); 
         return std::ctan(rad);
}