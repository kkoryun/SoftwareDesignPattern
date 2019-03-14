#ifndef BASE_VECTOR_H
#define BASE_VECTOR_H


template<class Type>
class IBaseVector
{
protected:
    Type *data;
    size_t size;
public:
    IBaseVector(size_t size_ = 0);
    IBaseVector(const Type *data_,size_t size_);
    size_t size() const;
    virtual Type& operator[](const size_t index) = 0;
    virtual const Type& operator[](const uint index) const = 0;
    virtual Type at(const uint index) = 0;
    virtual ~IBaseVector();
};

#endif // BASE_VECTOR_H
