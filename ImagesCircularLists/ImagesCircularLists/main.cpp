#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include "FileManager.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::directory_iterator;

int main() {

 string  path = "/Users/justi/OneDrive/Documentos/UNA/2023-II Ciclo/Progra I/Codigo Practicas/GitHub/Archivos/11-01-2023/Documentos/anime-20231101/anime";

 FileManager* manager = new FileManager();
 manager->getDirectories(path);	

}
