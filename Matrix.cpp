#include "Matrix.h"
#include "math.h"
#include "utility.h"

using namespace std;
namespace matrix {

template <typename T>
int Matrix<T>::size() {
    return state.size();
}

template <typename T>
vector<T>& Matrix<T>::operator[](int i) {
    return state[i];
}

template <typename T>
Matrix<T> Matrix<T>::operator*(Matrix<T>& other){
    assert(this[0].size() == other.size());

    vector<vector<T>> out;
    
    for (int i=0;i<size();i++) {

        vector<T> out_at_i = {};

        for (int j=0;j<other[0].size();j++) {
            
            vector<T> col_at_j = {};

            for (int k=0;k<other.size();k++) {
                col_at_j.push_back(other[k][j]);
            }

            out_at_i.push_back(math::dot_prod(state[i], col_at_j));

        }

        out.push_back(out_at_i);
    }
    
    Matrix<T> out_matrix(out);
    return out_matrix;
}

template <typename T>
string Matrix<T>::to_string(){

    string out = "";

    for (int i=0;i<size();i++){
        out.append( utility::vec_to_str(state[i]) + "\n" );
    }

    return out;
}

template <typename T>
Matrix<T> rand_matrix(int m, int n){

    vector<vector<T>> out = {};

    for (int i=0;i<m;i++){
        out.push_back(math::rand_vec<T>(n));
    }

    return Matrix<T>(out);
}

template class Matrix<float>;
template class Matrix<double>;

}
