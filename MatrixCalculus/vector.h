#ifndef VECTOR_H
#define VECTOR_H

#include "base_vector.h"

template<typename Type>
class Vector: public IBaseVector<Type>
{
public:
    Vector(uint size_);
    Vector(const Type *data_, uint size_);
};

#endif // VECTOR_H
