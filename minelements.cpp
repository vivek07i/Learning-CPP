#include <iostream>
#include <climits>

int main()
{
    int N;
    std::cin >> N;

    int arr[N];

    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }

    int minElement = INT_MAX; // Initialize minElement to the maximum integer value

    for (int i = 0; i < N; ++i)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    std::cout << minElement << std::endl;

    return 0;
}
