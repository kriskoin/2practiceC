

#include <vector>
#include <stdexcept>
#include <iostream>
#include "algo.h"



int main()
{
    ShiffTotal shiffTotal;

    std::vector<int> first;
    first.push_back(7);
    first.push_back(8);
    first.push_back(9);
    first.push_back(10);

    shiffTotal.append(first);
    
    std::cout << shiffTotal.contains(24) << std::endl;
    std::cout << shiffTotal.contains(27) << std::endl;
    std::cout << shiffTotal.contains(30) << std::endl;
    std::cout << shiffTotal.contains(31) << std::endl;

    std::vector<int> second;
    second.push_back(12);
    shiffTotal.append(second);

    std::cout << shiffTotal.contains(24) << std::endl;
    std::cout << shiffTotal.contains(27) << std::endl;
    std::cout << shiffTotal.contains(30) << std::endl;
    std::cout << shiffTotal.contains(31) << std::endl;

}
