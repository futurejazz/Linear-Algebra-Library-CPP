#pragma once
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cassert>



namespace math {

// Method: dot_prod
//      Desc: Returns the dot product of vectors v1 and v2
// Parameter: v1
//      Type: vector<T>&
// Parameters: v2
//      Type: vector<T>&
// Return:
//      Type: T, a floating point number
float dot_prod(std::vector<float>& v1, std::vector<float>& v2);
double dot_prod(std::vector<double>& v1, std::vector<double>& v2);

// Method: rand_vec
//      Desc: generates a vector of random floating point numbers with default range -1 to 1
// Parameter: size
//      Type: int
//      Desc: The size of the output vector
// Optional Parameter: range_start, range_stop
//      type: int, int
//      Desc: defines the start and stop (both inclusive) of the range that the elements will be generated within
// Return: vector<T>
//      Desc: A vector of floating point numbers within the given range
template <typename T>
std::vector<T> rand_vec(int size, int range_start=-1, int range_stop=1);

// Method: rand_num
//      Desc: Generates a random floating point between i and j to the nearest thousandth
// Parameters: i, j
//      Type: int, int
//      Desc: the output is between i and j if i>j
// Return:
//      Type: float
//      Desc: a float between values i and j (inclusive)
template <typename T>
inline T rand_num(int j=-1, int i=1) { return (T)((std::rand() % ((-j+i)*1000000)+1) + j*1000000) / 1000000.0; }

}
