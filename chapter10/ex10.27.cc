#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec{3, 5, 1, 5, 1, 7, 3, 7, 9};
    std::list<int> lst;

    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    for (auto i : lst) std::cout << i << " ";
    std::cout << std::endl;
}
