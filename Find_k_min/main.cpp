#include <iostream>
#include <algorithm>
#include <vector>

int find_k_min(std::vector<int> A, int k)
{
    std::make_heap(A.begin(), A.end(), std::greater<>());

     
    for(int i = 0; i < k; i++)
    {
        std::pop_heap(A.begin(), A.end(), std::greater<>());
        A.pop_back();
    }

    return A.front();
}

int main()
{
    std::vector<int> A = {7, 4, 3, 9, 8, 5, 1};

    int e = find_k_min(A, 4);

    std::cout << e << std::endl;

    return 0;
}