//Gavin Anderson, CIS 127, Assignment 10.1
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
#include <functional>

using namespace std;

string ask_filename() {
	cout << "Enter file name: ";
	string filename;
	cin >> filename;
	return filename;
}

vector<string> read_file(string filename) {
	vector<string> lines;
	// opens the file
	ifstream file(filename, ifstream::in);
	// loop until no lines
	string line;
	while (getline(file, line)) {
		lines.push_back(line);
	}
	file.close();
	return lines;
}

int str_to_int(string &s) {
	istringstream stream(s);
	int num = 0;
	stream >> num;
	return num;
}

vector<int> extract_numbers(vector<string> &lines) {
	vector<int> numbers;
	string number;
	// loop through each line
	for (int i = 0; i < lines.size(); i++) {
		if (lines.at(i) == "n") continue;
		// convert the line to an input stream
		istringstream stream(lines.at(i));
		// split the line on spaces
		while (getline(stream, number, ' ')) {
			// add the number to numbers
			numbers.push_back(str_to_int(number));
		}
	}
	return numbers;
}
// the number tally
map<int, int, greater<int> > tally_numbers(vector<int> &numbers) {
	map<int, int, greater<int> > tally;
	for (int i = 0; i < numbers.size(); i++) {
		tally[numbers.at(i)]++;
	}
	return tally;
}

void print_tally(map<int, int, greater<int> > &tally) {
	for (map<int, int>::iterator it = tally.begin(); it != tally.end(); ++it) {
		cout << it->first << ": " << it->second << endl;
	}
}

int main() {
	cout << "Gavin Anderson, CIS 127, Assignment 10.1";
	string filename = ask_filename();
	vector<string> lines = read_file(filename);
	vector<int> numbers = extract_numbers(lines);
	map<int, int, greater<int> > tally = tally_numbers(numbers);
	print_tally(tally);
	system("pause");
	return 0;
}
/*Gavin Anderson, CIS 127, Assignment 10.1Enter file name: test.dat
100: 3
90: 8
85: 3
75: 3
70: 2
60: 3
50: 1
35: 1
0: 34
Press any key to continue . . .*/