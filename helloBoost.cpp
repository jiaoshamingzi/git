#include<iostream>
#include<boost/format.hpp>
using namespace std;
int main()
{
    cout<<boost::format("There are %d ways I love you.") % 214<<endl;
    return 0;
}
