#include <iostream>
#include <fstream>
#include <iomanip>


int main()
{
	std::ifstream fstr("data.txt");
	std::ofstream oFile("result.txt");
	
	oFile << "N Mean" << "\n";

	if(fstr.fail())
	{
		std::cerr << "File not found" << std::endl;
		return 1;
	}
	
	double val;
	double sum = 0;
	double mean = 0;
	unsigned int n = 1;
	double val2;
	while(fstr >> val)
	{
		val2 = 0.75  * val - 1.75;
		sum += val2;
		mean = sum / n;
		oFile << n << " " << std::setprecision(16) << std::scientific << mean << "\n";
		n++;
	}

	
	return 0;
}
