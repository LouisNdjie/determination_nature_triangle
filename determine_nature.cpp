#include<iostream>

float AB = 0;
float AC = 0;
float BC = 0;

int main(int argc, char** argv){
	
	std::cout<<"renseigner la mesure des cotes du triangle"<<std::endl<<"AB =";
	std::cin>>AB;
	std::cout<<"AC =";
	std::cin>>AC;
	std::cout<<"BC =";
	std::cin>>BC;
	
	if(AB == AC && AB == BC && BC == AC ){
		std::cout<<"Ce triangle est un TRIANGLE EQUILATERAL";
	}else if ((AB == AC && AB!= BC)||(AC == BC && AC != AB)||(AB == BC && AB != AC)){
		std::cout<<"Ce triangle est un TRIANGLE ISOCELE";
	}else if((AB*AB + AC*AC == BC*BC)||(AB*AB + BC*BC == AC*AC)||(BC*BC + AC*AC == AB*AB)){
		if(AB*AB + AC*AC == BC*BC){
			std::cout<<"Ce triangle est un TRIANGLE RECTANGLE en A";
		}else if(AB*AB + BC*BC == AC*AC){
			std::cout<<"Ce triangle est un TRIANGLE RECTANGLE en B";
		}else if(BC*BC + AC*AC == AB*AB){
			std::cout<<"Ce triangle est un TRIANGLE RECTANGLE en C";
		}
	}else{
		std::cout<<"Ce triangle est un TRIANGLE SCALENE";
	}
	
}