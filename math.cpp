#include "math.h"

using namespace std;
namespace math{


float dot_prod(vector<float>& v1, vector<float>& v2){
    assert(v1.size() == v2.size());
    float sum = 0;
    
    for (int i=0;i<v1.size();i++){
        sum = sum + v1[i] * v2[i];
        
    }
    
    return sum;
}

double dot_prod(vector<double>& v1, vector<double>& v2){
    assert(v1.size() == v2.size());
    float sum = 0;
    
    for (int i=0;i<v1.size();i++){
        sum = sum + v1[i] * v2[i];
        
    }
    
    return sum;
}

template <typename T>
vector<T> rand_vec(int size, int range_start, int range_stop){
    vector<T> out = {};
    for (int i=0;i<size;i++){
        out.push_back(rand_num<T>());
    }
    return out;
}

template vector<float> rand_vec<float>(int,int,int);
template vector<double> rand_vec<double>(int,int,int);

template float rand_num<float>(int, int);
template double rand_num<double>(int, int);
}
