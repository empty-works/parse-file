#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::string file_name {"stats.txt"};	
	std::ifstream in_file;
	
	in_file.open(file_name);
	if(!in_file) {
		std::cout << "Error opening file." << std::endl;	
		return 1;
	}

	while(in_file) {
		std::string line;
		std::getline(in_file, line, ':');	

		in_file >> std::ws; // Take care of white spaces.

		int population {0};
		in_file >> population;

		std::cout << line << " -- " << population << std::endl;	
	}

	in_file.close();	
	return 0;
}
