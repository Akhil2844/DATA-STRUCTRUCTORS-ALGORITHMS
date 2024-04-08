#include <unordered_map>
#include <vector>
#include <iostream>

int maximumFrequency(const std::vector<int> &arr)
{
    std::unordered_map<int, int> count;

    // Count the frequency of each element
    for (int i = 0; i < arr.size(); ++i)
    {
        count[arr[i]]++;
    }

    int maxFreq = 0;
    int maxAns = 0;

    // Find the element with the maximum frequency
    for (auto &element : count)
    {
        if (element.second > maxFreq)
        {
            maxFreq = element.second;
            maxAns = element.first;
        }
    }

    return maxFreq;
}

// Example usage
int main()
{
    std::vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int result = maximumFrequency(arr);
    // 'result' now contains the maximum frequency in the vector
    std::cout << result;
    return 0;
}
