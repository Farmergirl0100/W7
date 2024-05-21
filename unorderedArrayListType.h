#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include "arrayListType.h"

class unorderedArrayListType : public arrayListType {
public:
    void insertAt(int location, int insertItem) override;
    void insertEnd(int insertItem) override;
    void replaceAt(int location, int repItem) override;
    int seqSearch(int searchItem) const override;
    void remove(int removeItem) override;

    unorderedArrayListType(int size = 100);
};

#endif
