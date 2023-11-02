#include "FileManager.h"

#include <filesystem>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::directory_iterator;

string* FileManager::getDirectories(string directoryPath)
{
    int numbDirectoriesInCarpet = 0;
    string* directoriesInCarpet = nullptr;
    string x;
    for (const auto& file : directory_iterator(directoryPath)) {
        if (is_directory(file.path())) {
            cout << file.path() << endl;
            numbDirectoriesInCarpet++; 
        }
    }

    cout << "Cantidad de carpetas: " << numbDirectoriesInCarpet << endl;

    if (numbDirectoriesInCarpet > 0) {
        directoriesInCarpet = new string[numbDirectoriesInCarpet];
        int index = 0;

        for (const auto& file : directory_iterator(directoryPath)) {
            if (is_directory(file.path())) {
               directoriesInCarpet[index] = file.path().generic_string();
                index++;
            }
        }
    }

    return directoriesInCarpet;
}

