#include "bubble_sort.h"

BubbleSort::BubbleSort()
{

}

 void BubbleSort::sort(std::vector<int> &series)
{
    for (int j = series.size() - 2; j >= 0; j--)
        {
            for (int i = 0; i < j + 1; i++)
            {
                if (series.at(i) > series.at(i + 1))
                {
                    int temp = series.at(i);
                    series.at(i) = series.at(i + 1);
                    series.at(i + 1) = temp;
                }
            }
        }

}
