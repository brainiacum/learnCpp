#include <fstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
	
	ifstream inp;
	inp.open("doc2.txt", std::ifstream::in);
	int length = inp.gcount();
	vector<string> v1(3);
	
	if (inp == NULL)
	{
		cout << "Ошибка открытия файла. \n";
		return 0;
	}
	
	char str[length];
	for(int j = 0; j < v1.size(); j++)
	{
		while(inp >> str)
		{
			v1[j] = str;
			cout << v1[j] << "\n";	
		}
		
	}
	inp.close();
	
	return 0;
}
