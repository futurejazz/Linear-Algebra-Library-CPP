#include "utility.h"

namespace utility {

std::string vec_to_str(std::vector<double>& vec){
    std::string out = "";
    
    for (int i=0;i<vec.size();i++){
        out.append(std::to_string(vec[i]) + " ");
    }
    
    return out;
}

std::string vec_to_str(std::vector<float>& vec){
    std::string out = "";
    
    for (int i=0;i<vec.size();i++){
        out.append(std::to_string(vec[i]) + " ");
    }
    
    return out;
}

}
