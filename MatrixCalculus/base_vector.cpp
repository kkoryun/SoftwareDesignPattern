#include "base_vector.h"

#include <cstring>

using namespace std;

template<class Type>
IBaseVector<Type>::IBaseVector(size_t size_ = 0):
    size(size_),
    data(nullptr)
{
    data = new Type[size];
}

template<class Type>
IBaseVector<Type>::IBaseVector(const Type *data_, size_t size_) :
    size(size_),
    data(nullptr)
{
    data = new Type[size];
    memcpy(data, data_, size * sizeof(T));
}

template<class Type>
IBaseVector<Type>::~IBaseVector() {
    delete[] data;
    data = nullptr;
}

template<class Type>
size_t IBaseVector<Type>::size() const {
    return size;
}
