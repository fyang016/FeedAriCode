#include <iostream>
#include <vector>
using namespace std;

template <typename T>


int vectorSearch(vector<T> &asdf, T content)
{
    int i = 0;
    for (i = 0; asdf.at(i) != content; ++i)
    {
        
    }
    
    
    return i;
}

int main()
{
    vector<int> asdf;
    
    asdf.push_back(3);
    asdf.push_back(4);
    asdf.push_back(5);
    
    cout << "Found value at index " << vectorSearch(asdf, 4);
    
    
    return 0;
}