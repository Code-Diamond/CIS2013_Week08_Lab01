#include <iostream>

//file stream
#include <fstream>


using namespace std;

int main()
{
	int number = 0;

	//Create an output file stream named out_a
	ofstream out_a;
	//Open a file

	out_a.open("numbers.dat");
	if(out_a.fail())
	{
		cout << "Unable to open file numbers.dat";
		exit(1);
	}


	char cont = 'y';

	while(cont == 'y')
	{
		cout << "Type a number to save to the file: " << endl;
		cin >> number;

		out_a << number << " ";

		cout << "Type another number? (y/n)";
		cin >> cont;
	}
	out_a.close();


	return 0;
}
