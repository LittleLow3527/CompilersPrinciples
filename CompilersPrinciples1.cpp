// CompilersPrinciples1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "fstream"
#include"iostream"
#include"string"
using namespace std;

//int countLines()

int main()
{
	char a[100];
	unsigned i,k = 0;
	string temp;
	string x, y, z;
	//char firstLine[100];
	string Vn;
	string Vt;
	string b;
	int flag1, flag2 = 0;
	int countOf = 0;
	int countline = 0;
	
	fstream fileForRead,fileForWrite;
	fileForRead.open("C:\\Users\\reo35\\Desktop\\test.txt");
	if (!fileForRead.is_open())
	{
		cout << "open failed!" << endl;
		exit(1);
	}
	while (!fileForRead.eof())
	{
		fileForRead.getline(a,100);
		cout << a << endl;
	}
	string buffer1 = a;
	string buffer2 = a;
	//开始符号
	for ( i = 0; i <= buffer1.length(); i++)
	{
		if (buffer1[i]==')')
		{
			cout << "开始符号:" << buffer1[i-1] << endl;
		}
	}
	//产生式条数
	for ( i = 0; i <= buffer1.length() ; i++)
	{
		if (buffer1[i] == '=')
		{
			countOf++;
		}
	}
	cout << "产生式条数:" << countOf<< endl;
	//非终结符
	flag1 = buffer1.find_first_of("{");
	flag2 = buffer1.find_first_of("}");
	Vn = buffer1.substr(flag1, flag2);
	cout <<"非终结符是："<< Vn << endl;
	//终结符
	buffer2 = buffer1.substr(flag2+1, buffer1.length());
	flag1 = buffer2.find_first_of("{");
	flag2 = buffer2.find_first_of("}");
	Vt = buffer2.substr(flag1, flag2);
	cout << "终结符是：" << Vt << endl;

	/*while (getline(fileForRead,temp))
	{
			countline++;
	}
	cout << "the count of line:" << countline;
	cout << endl;
	fileForRead.open("C:\\Users\\reo35\\Desktop\\test.txt");
	fileForRead.getline(firstLine, 100, '\n');
	string buffer1 = firstLine;
	cout << firstLine << endl;
	for (i = 0; i <=buffer1.length(); i++)
	{
		if (buffer1[i] == '+')
		{
			x = buffer1.substr(0, i);
			cout <<"class:"<< x << endl;
			break;
		}
	}
	for (j = i+1; j <= buffer1.length(); j++)
	{
		if (buffer1[j] == '+')
		{
			y = buffer1.substr(i+1, j-i-1);
			cout << "name:"<<y << endl;
			break;
		}
	}
	z = buffer1.substr(j + 1, buffer1.length()-1);
	cout <<"number:"<< z << endl;*/
	/*for (k = j+1; k <= buffer1.length(); k++)
	{
		if (buffer1[k] == '\n')
		{
			z = buffer1.substr(j+1, k-j-1);
			cout << z << endl;
			break;
		}
	}*/
	/*fileForRead.close();
	fileForWrite.open("C:\\Users\\reo35\\Desktop\\test.txt",ios::app);*/
	/*cout << "plz input" << endl;
	cin >> aaa;
	fileForWrite << aaa << endl;*/
	//fileForWrite<<<<" Of course I still love you" << endl;
	cout << "please input sentences to add, input exit to quit" << endl;
	do
	{
		cin >> b;
		if (b=="exit")
		{
			exit(1);
		}
		fileForWrite << b << endl;
	} while (true);
	fileForRead.close();
	return 0;
	/*string keyWord;
	getline(cin, keyWord);
	ifstream inputFile("input.txt");
	bool found = false;
	for (string line; getline(inputFile, line); ) {

		if (!line.compare(0, key.length(), key)) {

			cout << line.substr(key.length());
			found = true;
			break;
		}
	}
	if (!found) std::cout << "Not found" << std::endl;*/
}

