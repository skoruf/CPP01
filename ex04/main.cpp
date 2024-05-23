#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv){

	if (argc != 4)
		return std::cout <<"Error: Wrong number of args" <<std::endl, 1;
	
	std::string	line;
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	std::string	out(argv[1]);
	out.append(".replace");
	std::ifstream	file;
	
	file.open(argv[1]);
	if (file.is_open()){
		std::ofstream	outfile(out.c_str());
		while (file){
		
			std::getline(file, line);
			for (int i = 0; line[i]; i++){
			
				if (!line.compare(i, s1.size(), s1)){
					outfile<<s2;
					for (size_t j = 1; j < s1.size(); j++)
						i++;
				}
				else
					outfile<<line[i];
			}
			outfile<<std::endl;
		}
		outfile.close();
	}
	
	else
		return std::cout <<"Error: couldn't open file: " <<argv[1] <<std::endl, 1;
	
	return 0;
}
