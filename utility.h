#pragma once
#include <string>
#include <vector>

namespace utility {

// Method: vec_to_str
//      Desc: converts a vector of floating points to a string representation
// Parameter: vec
//      Type: std::vector<float>& or std::vector<double>&
//      Desc: The vector to be converted to a string
// Return: std::string
//      Desc: string representation of vector

std::string vec_to_str(std::vector<double>& vec);
std::string vec_to_str(std::vector<float>& vec);

}
