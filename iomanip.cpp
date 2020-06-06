
#include <iostream>
#include <iomanip>
#include <map>
#include <string>

#include <stdio.h>

int main() {
	unsigned year = 1822;
	unsigned month = 9;
	unsigned mday = 7;

	std::cout << year << "-" << month << "-" << mday << std::endl;
	
	printf("%04d-%02d-%02d\n", year, month, mday);
	std::cout << std::setfill('0') << std::setw(4) << year << "-" << std::setw(2) << month << "-" << std::setw(2) << mday << std::endl;
		
	std::map<std::string, double> listings;
	listings["Sabonete"] = 0.75;
	listings["Shampoo"] = 7.59;
	listings["Condicionador"] = 7.09;
	listings["Odorizador"] = 11.12;
	
	std::cout << "*** Tabela de Precos ***" << std::endl;
	for (std::map<std::string, double>::iterator it = listings.begin(); it != listings.end(); it++) 
		std::cout << std::setfill('.') << std::setw(20) << std::left << it->first << 
			" $ " << std::setfill(' ') << std::setw(8) << std::right << std::fixed << std::setprecision(2) << it->second << std::endl;
	
}
