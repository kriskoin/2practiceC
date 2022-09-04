

#include <vector>
#include <stdexcept>
#include <iostream>
#include <map>
#include <set>

class MovingTotal
{
public:

    void append(const std::vector<int>& list) 
    {
        std::map<std::vector<int>,int>::iterator it;
        it=listArrays.find(list);
        
        if(it==listArrays.end()){
            //new list
        
            //std::map<std::vector<int>,int>::iterator ret = listArrays.insert ( std::make_pair(list,0) );
            it = listArrays.insert ( std::make_pair(list,0) );
            //listArrays.insert ( std::make_pair(list,0) );
            //this->calculateTotals(&ret);
        }else{
            //old list
            this->calculateTotals(&it);
        }
        
    }
    
    bool contains(int total) 
    {
        throw std::logic_error("Waiting to be implemented");
    }
    private:
    void calculateTotals(const std::map<std::vector<int>,int>::iterator * it){

    } 
    std::map<std::vector<int> , int> listArrays;
    std::set<int> listTotals;
};

#ifndef RunTests
int main()
{
    MovingTotal movingTotal;

    std::vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    movingTotal.append(first);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;

    std::vector<int> second;
    second.push_back(5);
    movingTotal.append(second);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;
}
#endif