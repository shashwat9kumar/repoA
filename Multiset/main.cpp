#include <iostream>
#include <set>
#include <functional>
#include <string>
#include <iterator>

using namespace std;






class Person
{
public:
    float age;
    string name;

    bool operator < (const Person& x) const{
        return age<x.age;
    }

    bool operator > (const Person& x) const{
        return age>x.age;
    }
};

void SetOfPerson()
{
    multiset<Person , greater<Person>> s = {{21, "Shashwat"} , {20,"Shrikant"} , {22,"Nitish"}, {21, "Shashwat"}};
    for(const auto e: s)
    {
        cout<<e.age << "  " << e.name<<endl;
    }
}






int main()
{
    multiset<int , std::greater<int>> s = {1,2,3 ,4,5,4,3,2,1};
    s.insert(3);
    //
    //bool x = ;

    for(const auto e: s)
    {
        cout<<e<<endl;
    }
    /*
    set<int>::iterator it;
    for(it = s.begin();it != s.end(); it++)
    {
        cout<<*it<<endl;
    }
    cout << "Hello world!" << endl;

    */
    SetOfPerson();
    return 0;
}
