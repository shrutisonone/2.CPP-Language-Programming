#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{

    unordered_map<string,int>umap;

    umap["GeeksForGeeks"]=10;
    umap["Pracitce"]=20;
    umap["Contribute"]=30;

    for(auto x: umap)
    cout << x.first <<" "<< x.second <<endl;
}