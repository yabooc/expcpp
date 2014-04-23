#include "c11.h"

c11::c11() = default;

c11::~c11() = default;

c11::c11(c11& source)
{
    block = source.block;
}

class MemoryBlock
{
public:
    MemoryBlock();
    ~MemoryBlock();
    int value;
};
MemoryBlock::MemoryBlock() = default;
MemoryBlock::~MemoryBlock() = default;

