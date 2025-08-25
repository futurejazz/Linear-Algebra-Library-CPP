#pragma once
#include <vector>
#include <cassert>
#include <string>
#include <initializer_list>


namespace matrix {

// Class: Matrix
//      Desc: A matrix of floating points
template <typename T>
class Matrix {
    
// #TODO convert to a generic class with template
public:
    // Attribute: state
    //      Type: vector<vector<T>>
    //      Desc: a vector of vectors representing the matrix
    std::vector<std::vector<T>> state;

    // Attribute: size
    //      Type: int[2]
    //      Description: The dimensions of the matrix

    // #TODO add size to constructor
    // Matrix constructor from two-dimensional vector
    Matrix<T>(std::vector<std::vector<T>> data) : state(std::move(data)) {}

    // Method: size
    //      Desc: Returns number of vectors in the matrix
    // Return: int
    //      Desc: number of vectors in the matrix
    int size();
    
    // Method: Override index operator
    //      Desc: returns the vector at the given index i
    // Parameter: i
    //      Type: int
    //      Desc: the index to read/write data at
    // Return: vector<float>&
    //      Desc: reference to the vector<float> at index i
    std::vector<T>& operator[](int i);
    
    // Method: Override multiplication operator
    //      Desc: Overrides the multiplication operator with matrix multiplication
    // Parameter: other
    //      Type: Matrix&
    //      Desc: The matrix transformation
    // Return: Matrix
    //      Desc: The image of this matrix
    Matrix<T> operator*(Matrix<T>& other);
    
    // Method: to_string
    //      Desc: Returns a string representation of the matrix
    std::string to_string();
};

// Function: rand_matrix
//      Desc: outputs a random mxn matrix of values between -1.000 and 1.000
// Parameters: m, n
//      The number of rows and columns of the matrix respectively
// Return: Matrix
//      An MxN matrix consisting of values between -1.000 and 1.000
template <typename T>
Matrix<T> rand_matrix(int m=3, int n=3);

}
