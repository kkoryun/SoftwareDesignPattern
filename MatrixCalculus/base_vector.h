#ifndef BASE_VECTOR_H
#define BASE_VECTOR_H

typedef unsigned int uint;

template<typename Type>
class IBaseVector
{
protected:
    Type *data;
public:
    const uint size;
    IBaseVector(uint size_ = 0);
    IBaseVector(const Type *data_,uint size_);
    virtual Type& operator[](const uint index) = 0;
    virtual const Type& operator[](const uint index) const = 0;
    virtual Type at(const uint index) = 0;
    virtual ~IBaseVector();
};

#endif // BASE_VECTOR_H
