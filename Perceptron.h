#pragma once
#include <vector>
#include <cstdlib>
#include <ctime>

namespace perceptron {

class Perceptron {
public:
    // Attribute: input_size
    //      Type: int
    //      Desc: The number inputs to this perceptron
    int input_size;
    
    // Attribute: learnc
    //      Type: float
    //      Desc: How fast weights are adjusted
    float learnc;
    
    // Attribute: bias
    //      Type: float
    //      Desc: Linearly shifts the threshold of the activation function
    float bias = 1.0;
    
    // Attribute: weights
    //      Type: vector<float>
    //      Desc: a vector containing the weights of each input feature, including bias
    std::vector<float> weights = {};
    
    // Method: Constructor
    //      Desc: Initializes a perceptron object
    // Parameter: in_size
    //      Type: int
    //      Desc: The size of the input vector
    // Parameter: learnc
    //      Type: float
    //      Desc: The rate of learning of the Perceptron (set to 0.00001 by default)
    Perceptron(int inputs, float learnc=0.00001);
};

}
