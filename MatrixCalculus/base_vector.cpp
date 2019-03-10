#include "base_vector.h"

IBaseVector::IBaseVector(uint size_ = 0):
    size(size_),
    data(nullptr)
{
    data = new Type[size];
}
