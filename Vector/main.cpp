#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vec.reserve(32);  // setting the capacity to 32... Thereby reducing the doubling of the vector array everytime.
    for(int i=0;i<32;i++)
    {
        cout<<vec.size()<< "    " <<vec.capacity()<<endl;
        vec.push_back(i);
    }
    cout<<vec.size()<< "    " <<vec.capacity()<<endl;
    return 0;
}
