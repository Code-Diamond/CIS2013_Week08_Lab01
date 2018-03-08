#include <iostream>

//file stream
#include <fstream>


using namespace std;

int main()
{
	ifstream in_a;

	in_a.open("numbers.dat");

	if(in_a.fail())
	{
		cout << "Something went wrong. \nMaybe you should check your numbers.dat file's existence...";
		exit(1);				
	}
	int one, two, three, four, five;

	in_a >> one >> two >> three >> four >> five;

	cout << "Our previous numbers are " << one << " " << two << " " << three << " " << four << " " << five;
	in_a.close();

	return 0;
}
