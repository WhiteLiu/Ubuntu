#include <iostream>

namespace myStuff
{ int value = 10;
 int value2 = 20;
int addab(int value,int value2)
{
return (value+value2);
}
int minusab(int value,int value2)
{
return (value-value2);
}
}



int main()
{
     //using namespace myStuff;
     std::cout<<"Hello SLAM!"<<std::endl;
     //std::cin>> value;
     std::cout<<"\nYou entered "<<myStuff::minusab(myStuff::value,myStuff::value2)<<std::endl;
     return 0;
}
