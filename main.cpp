#include <vector>
#include <iostream>
#include <string>
#include "bubble_sort.h"

int main()
{
  std::vector<int> input = {3 , 12, 15, 7 , 20, 13, 33, 333, -3,21,23};
  
    BubbleSort::sort(input);

//displace
  for (int i = 0; i < input.size(); i++)
{
	std::cout << input.at(i) << " ";
}

	return 0;
}
