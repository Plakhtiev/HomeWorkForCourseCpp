#include <iostream>
#include<vector>
#include<algorithm>

int FindPair(std::vector<int>& vec) {
	std::sort(vec.begin(), vec.end());
	for (size_t i = 1; i < vec.size(); i += 2)
	{
		if (vec.at(i - 1) != vec.at(i)) {
			return vec.at(i - 1);
		}
		
	}
	return vec.back();
}


int main()
{
    std::vector<int> testVector = { 7, 9, 1, 7, 8, 0, 9, 1, 8 };

	std::cout << FindPair(testVector);
}