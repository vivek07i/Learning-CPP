#include <iostream>
using namespace std;

void fahren_to_cel(int start, int end, int step)
{
    for (int i = start; i <= end; i += step)
    {
        int celsius = ((i - 32) * 5) / 9;
        cout << i << "\t" << celsius << endl;
    }
}

int main()
{
    int start, end, step;
    cin >> start >> end >> step;

    fahren_to_cel(start, end, step);

    return 0;
}
