#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::string file_name {"stats.txt"}	
	std::ifstream in_file;
	
	in_file.open(file_name);
	return 0;
}
