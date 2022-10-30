#include<typeinfo>
#include<iostream>
#include<string>
int main()
{
    auto s{"Hello"};
    std::cout<<typeid(s).name();
    return 0;
}
