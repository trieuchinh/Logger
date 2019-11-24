#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void SimpleGreedyAlgo(vector<int>currencies, int& nAmount)
{
    map<string, int>Cashes;
    for(int i : currencies)
    {
        int nNumCoin = nAmount/i;
        Cashes[std::to_string(i)] = nNumCoin;
        nAmount =  nAmount%i;
    }
    for(auto i : Cashes)
    {
        cout<<"Coin "<<i.first<<" is "<<i.second<<" times" <<endl;
    }
}

int main()
{
    vector<int>currencies = {10, 5 , 2,  1};
    int amount = 13;
    SimpleGreedyAlgo(currencies, amount);
    cout<<endl<<"Ended program"<<endl;
    getchar();
    return 1;
}
