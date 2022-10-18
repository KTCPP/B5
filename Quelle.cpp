#include "pch.h"
#include "Header.h"


int addinsteps(int sum, int till, int increment)
{
	for (int i = 0; i <= till; i += increment)	sum += i;
	return sum;
}

std::vector<int> get_n_randoms(int n) {
	if (n < 0) throw std::invalid_argument("keine negativen Zahlen bitte");
	std::vector<int> result;
	for (int i = 0; i < n; i++) {
		result.push_back(rand());
	}
	return result;
}


void output(std::vector<int>& randoms)
{
	for (int n : randoms) std::cout << n << std::endl;
}

bool iseven(int n) {
	return (n % 2) == 0;
}
bool isodd(int n) {
	return !iseven(n);
}

void erase_at(std::vector<int>& vec, int n) {
	vec.erase(vec.begin() + n);
}

void eraseodds(std::vector<int>& randoms)
{
	for (int n = 0; n < randoms.size(); n++) {
		if (isodd(randoms.at(n))) {
			erase_at(randoms, n);
			n--;
		}
	}
}
