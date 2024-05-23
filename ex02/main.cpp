#include <string>
#include <iostream>

int main(){

	std::string	brain;
	brain = "HI THIS IS BRAIN";
	
	std::string	*brainPTR = &brain;
	std::string	&brainREF = brain;
	
	std::cout <<"Brain address: \t\t" <<&brain <<std::endl;
	std::cout <<"Brain_ptr_address: \t" <<brainPTR <<std::endl;
	std::cout <<"Brain_ref address: \t" <<&brainREF <<std::endl;
	
	std::cout <<"Brain value: \t\t" <<brain <<std::endl;
	std::cout <<"Brain_ptr value: \t" <<*brainPTR <<std::endl;
	std::cout <<"Brain_ref value: \t" <<brainREF <<std::endl;
	
	std::cout << "\nChange value of brain: HI THIS IS NEW BRAIN\n"<<std::endl;
	brain = "HI THIS IS NEW BRAIN";
	
	std::cout <<"Brain address: \t\t" <<&brain <<std::endl;
	std::cout <<"Brain_ptr_address: \t" <<brainPTR <<std::endl;
	std::cout <<"Brain_ref address: \t" <<&brainREF <<std::endl;
	
	std::cout <<"Brain value: \t\t" <<brain <<std::endl;
	std::cout <<"Brain_ptr value: \t" <<*brainPTR <<std::endl;
	std::cout <<"Brain_ref value: \t" <<brainREF <<std::endl;
	
	return 0;
}
