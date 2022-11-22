//
//  Heap.hpp
//  MTH9815-Quiz1
//
//  Created by 王明森 on 11/22/22.
//

#ifndef Heap_hpp
#define Heap_hpp

#include <vector>
#include <utility>

class Heap {
private:
    std::vector<int> data_;
    
    std::size_t GetParent(std::size_t idx) const;
    std::pair<std::size_t, std::size_t> GetChildren(std::size_t idx) const;
    
    void Print() const;
    
public:
    Heap() = default;
    ~Heap() = default;
    
    int Top() const;
    void Push(int elem);
    int Pop();
    int PushPop(int elem);
    
    bool empty() const;
};

#endif /* Heap_hpp */
