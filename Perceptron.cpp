#include "Perceptron.h"
#include "math.h"

using namespace std;

namespace perceptron {
    
// Method: Constructor
//      Desc: Initializes a perceptron object
// Parameter: in_size
//      Type: int
//      Desc: The size of the input vector
// Parameter: learnc
//      Type: float
//      Desc: The rate of learning of the Perceptron (set to 0.00001 by default)
Perceptron::Perceptron(int inputs, float learn_rate) : learnc(learn_rate), input_size(inputs) {
    // Adding 1 to account for the weight of the bias
    srand(time(0));
    weights = math::rand_vec(inputs+1);
}

}
