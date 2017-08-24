#include <forward_list>
#include <iostream>

using namespace std;
int main()
{
    std::forward_list<int> fl = {};
    int j;
    cout << "Введите количество элементов списка\n";
    int imax;
    cin >> imax;
    if (cin.fail())
    {
        cout << "Вы ввели нецелочисленное значение.\n";
        return 0;
    } 
    else if (imax == 0)
    {
        do
        {
            cout << "количество элементов не может быть равно нулю. Введите заново ЦЕЛОЦИСЛЕННОЕ значение: \n";
            cin >> imax;
        }
        while(imax == 0);   
    }
    cout<<"Введите элементы списка\n";
    for(int i = 0 ;i < imax; i++){   
        std::cin >> j;
        if (cin.fail())
        {
            cout << "Элементами списка должны быть числа.\n";
            return 0;
        }
        fl.push_front(j);
    }
    fl.sort();
    cout<<"Производится сортировка:\n";
    
    for (forward_list<int>::iterator li = fl.begin(); li! = fl.end(); li++)
    {
        cout << *li << '\n';
    }
    return 0;
}
