#ifndef SPARSE_VECTOR_H
#define SPARSE_VECTOR_H

#include "base_vector.h"

template<class Type>
class SparseVector : public IBaseVector<Type>
{
public:
    SparseVector();
};

#endif // SPARSE_VECTOR_H

template<class Type>
SparseVector<Type>::SparseVector() {
    
}
