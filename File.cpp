#include "stdafx.h"
#include "File.h"
#include <conio.h>
using namespace std;

File::File() {
	readFile(fileName);
	writeFile(fileName);
	parse();
}


File::~File() {

}

//write the output of the file to the console.
void File::writeFile(std::string fileName) {
	std::ifstream file(fileName);
	std::string line;
	for (int i = 0; i < file.end; i++) {
		std::cout << line << std::endl;
	}
}

//read what's in the file.
void File::readFile(std::string fileName) {
	std::ifstream file(fileName);
	std::string line; //line from the file
	for (int i = 0; i < fileName.end; i++) {
		_fileData.push_back(line);
	}
	parse();
}

//parse what's in the text file
void File::parse(std::string fileName) {
	char delimiter[3] = { '.', ' ', '\n' }; //delimiters of period (full stop), space, and newlines.
	char symbol; //a character in the file
	int sentanceNum; //number of times '.' occurs
	int wordNum; //number of times ' ' occurs
	int paragraphNum; //number of times '\n' occurs

	switch (symbol) {
	case '.':
		sentanceNum++;
		break;
	case ' ':
		wordNum++;
		break;
	case '\n':
		paragraphNum++;
		break;
	}

}
