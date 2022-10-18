#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>


typedef std::pair<int, int> pair;

int main()
{
	std::vector<pair> v = { {4, 2 }, {1, 7 }, {4, 5 }, {1, 2 }, {1, 1}, {4, 1 } };

	std::sort(v.begin(), v.end(),
			[](const pair &x, const pair &y) {
				
				if (x.second != y.second) {
					return x.second < y.second;
				}

				
				return x.first < y.first;
			});

	for (const pair &p: v) {
		std::cout << '{' << p.first << ',' << p.second << '}' << std::endl;
	}

	return 0;
}
