#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

class File {
public:
	File();
	~File();
	void writeFile(std::string fileName);//write the output of the file to the console.
	void readFile(std::string fileName); //read what's in the file.
	void parse(std::string fileName);   //parse text file

private:
	std::vector<std::string> _fileData;
};

