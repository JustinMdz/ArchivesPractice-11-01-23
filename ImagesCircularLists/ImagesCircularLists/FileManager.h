#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using namespace std;
using std::filesystem::directory_iterator;
using std::filesystem::recursive_directory_iterator;

class FileManager
{
public:
	string* getDirectories(string);
};