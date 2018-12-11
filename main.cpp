//Leonardo Garcia
//Lab 9

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//declare variables
	string file;
	ifstream inFile;
	ofstream outFile("output.txt");
	string item;
	map <string, int> tally;

	//output request to keyboard and input file name
	cout << "Enter a File Name: " << endl << "\n";
	cin >> file;

	//open file
	inFile.open(file);

	//while loop to read through entire file to get last two numbers and total count
	while (!inFile.eof())
	{
		inFile >> item;
		if (!inFile.fail()) {
			++tally[item];
		}

	}

	//close file and output results
	inFile.close();
	//cout << "\nFirst #: " << first << endl << "Second #: " << second << endl << "Second to Last #: " << bLast << endl << "Last #: " << last << endl << "Total Count: " << count << endl << "\n";
	if (outFile.is_open()) {

		for (std::map<string, int>::iterator it = tally.begin(); it != tally.end(); ++it)
			for (int i = 0; i <= it->second; i++) {
				outFile << it->first << endl;
			}
	}

	system("pause");
	return 0;
}
