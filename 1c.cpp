#include <algorithm>
#include <list>
#include <iostream>

using namespace std;
int main()
{
    list<int> l;
    int i;
    int j;
    cout<<"Введите количество элементов списка\n";
    int imax;
    cin>>imax;
    cout<<"Введите элементы списка\n";
    for(i = 0 ;i < imax;i++){
        std::cin>>j;
        l.push_back(j);
    }
    l.sort();
    cout<<"Производится сортировка:\n";
    list<int>::iterator li;
    for (li = l.begin();li!=l.end();li++)
    {
        cout<<*li<<'\n';
    }
    /*int max = 0;
    for (li = l.begin();li!=l.end();li++)
        if(max < *li) max = *li;
    list<int>::iterator temp = l.begin();
    *temp = max;
        for (li = l.begin();li!=l.end();li++)
            cout<<*li,"\n";
    */
    return 0;
}