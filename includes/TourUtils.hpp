#ifndef TOURUTILS_HPP
#define TOURUTILS_HPP

#include <vector>
#include <iostream>
#include <cmath>
#include <limits>
#include <utility>

#include "CustomerMap.hpp"
#include "Population.hpp"

using std::vector;
using std::cout;
using std::endl;
using std::pair;
using std::make_pair;


// SECTION TO FITNESS CALCULATION
// Main function to calculate fitness, will return the value
double getTourDistance(vector<int>&);
// return the charge used of route inside the tour
double getSubCharge(vector<int>&);
// return a distance used in route 
double getSubDistance(vector<int>&);
// return the euclidian distance beetween two points in map
double distance(const int, const int);

// Return a vector of each tour (route) in cromossome, like a "explode" function for strings
vector<vector<int>> explodeSubTours(vector<int>, int);
// Return the charges of all routes contained in a tour
vector<int> getAllCharges(vector<int>);

// Utility for GPX
double getDistString(vector<string>&);

double smallerDistance(Population&);

#endif