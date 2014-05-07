#include "stdafx.h"
#include "c11.h"

c11::c11() = default;

c11::~c11() = default;

c11::c11(c11& source)
{
    block = source.block;
}

class c11::MemoryBlock
{
public:
    MemoryBlock();
    ~MemoryBlock();
    int value;
};
c11::MemoryBlock::MemoryBlock() = default;
c11::MemoryBlock::~MemoryBlock() = default;

