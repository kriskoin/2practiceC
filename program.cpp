

#include <vector>
#include <stdexcept>
#include <iostream>
#include <map>

class MovingTotal
{
public:

    void append(const std::vector<int>& list) 
    {
        std::map<std::vector<int>::iterator it;
        it=listTotals.find(list);
        if(it==listTotals.end()){
            //new list
            std::vector<int> totals
            ret = mymap.insert ( std::vector<int> *, std::vector<int>(list,totals) );
            calculateTotals(ret->first,ret->second);
        }else{
            //old list

        }
    }
    
    bool contains(int total) 
    {
        throw std::logic_error("Waiting to be implemented");
    }
    private:
    void calculateTotals(std::vector<int> *, std::vector<int>){

    } 
    std::map<std::vector<int> *, std::vector<int>> listTotals;
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