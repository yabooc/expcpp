#pragma once
#include <memory>
class c11
{
public:
    c11();
    c11(c11& source);
    ~c11();
    class MemoryBlock;
    std::shared_ptr<MemoryBlock> block;
private:
    int value;
};
