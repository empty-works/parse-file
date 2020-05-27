#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::string file_name {"stats.txt"}	
	std::ifstream in_file;
	
	in_file.open(file_name);
	if(!in_file) {
		std::cout << "Error opening file." << std::endl;	
		return 1;
	}

	in_file.close();	
	return 0;
}
