#include <fstream>
#include <string>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
 
int main()
{
	string inputarr[3];
	ifstream inp("doc2.txt");
	
	/*if (in == NULL)
	{
		perror("Ошибка открытия файла");
	}
	else
	{*/
	char str[17];
	/*for(int i=0;i<sizeof(inputarr)/sizeof(inputarr[0]);i++)
		{
			
			do
			{

				temp=puts(str);
				temp=temp;
			}
			while(" " not in temp);
			inputarr[i]=str;
		}
		*/
	for(int j=0;j<sizeof(inputarr)/sizeof(inputarr[0]);j++)
	{
		while(inp >> str)
		{
			inputarr[j]=str;
			cout<<str<<endl <<"\n";
			cout<<j+1<<"й Элемент массива: "<<inputarr[j]<<"\n";
		}
	
		
		
	}
	inp.close();
	

	return 0;
}