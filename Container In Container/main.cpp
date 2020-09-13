#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;






int main()
{
    vector< vector<int> > tree;
    int edge, nodes, n1, n2;
    cin >> edge >> nodes;

    tree.resize(nodes + 1);
    return 0;

    for(int i = 0;i <edge;i++){
        cin>>n1>>n2;
        tree[n1].push_back(n2);
    }
    //iterator
    for(auto &e1 : tree){
            std::cout<< e1<<"\t\t";
        for(const auto e2 : e1){
            cout<< e2<<"\t";
        }
        cout<<endl;
    }
}
