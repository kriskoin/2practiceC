# 2practiceC
## total of any three successively added elements
Data structure that can efficiently store and check if the total of any three successively added elements is equal to given total


Example:

instatiating a shiffTotal object create an empty container with no existing totals, append ({7,8,9,10}) appends elements
{7,8,9,10} which means that there are two existing totals 7+8+9 = 24 and 8+9+10=27, append{11} appends element 11 and creates am additional total 
from {9,10,11} 9+10+11=30. At this point contains(24)=contains(27)=contains(30)= true, while contains(31)  returns false.


### How to build
cd build
cmake ..
make
### How to test
ctest

Happy coding !!!