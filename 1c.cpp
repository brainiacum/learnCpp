#include <forward_list>
#include <iostream>
#include <atomic>

template <typename iterator, int>
void sort_fl(iterator first, int length)
{
    for (int j = 0; j < length; j++)
    {
        int pos = j;
        for (int k = j + 1; k < length; j++)
        {
            if((first + k) < (first + pos))
            {
                pos = k;
                (first + pos) = (first + k);
            }
        }
        std::swap(first+pos,first+j); 
    }
}

int main()
{
    std::forward_list<int> fl;
    int j;
    std::cout << "Введите количество элементов списка\n";
    int imax;
    std::cin >> imax;
    if (std::cin.fail())
    {
        std::cout << "Вы ввели нецелочисленное значение.\n";
        return 0;
    } 
    else if (imax == 0)
    {
        do
        {
            std::cout << "количество элементов не может быть равно нулю. Введите заново ЦЕЛОЦИСЛЕННОЕ значение: \n";
            std::cin >> imax;
        }
        while(imax == 0);  
    }
    std::cout<<"Введите элементы списка\n";
    for(int i = 0 ;i < imax; i++){   
        std::cin >> j;
        if (std::cin.fail())
        {
            std::cout << "Элементами списка должны быть числа.\n";
            return 0;
        }
        fl.push_front(j);
    }
    std::cout<<"Производится сортировка:\n";
            
    sort_fl(fl.begin(),imax);
    
    //fl.sort();


    
    for (std::forward_list<int>::iterator li = fl.begin(); li != fl.end(); li++)
    {
        std::cout << *li << '\n';
    }
    return 0;
}
