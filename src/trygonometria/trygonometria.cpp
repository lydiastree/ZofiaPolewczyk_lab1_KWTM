#include "trygonometria.h"
#include <cmath>


double degreemath::sin(double degree) {
         double rad = degree*(M_PI/180); 
         return std::sin(rad);
}

double degreemath::cos(double degree) {
         double rad = degree*(M_PI/180); 
         return std::cos(rad);
}

double degreemath::tan(double degree) {
         double rad = degree*(M_PI/180); 
         return std::tan(rad);
}

double degreemath::ctan(double degree) {
         double rad = degree*(M_PI/180); 
         return 1/std::tan(rad); 
}