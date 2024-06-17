class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Moore's Voting algorithm
        // size of the given array:
        int n = v.size();
        int cnt = 0; // count
        int el;      // Element

        // applying the algorithm:
        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                el = v[i];
            }
            else if (el == v[i])
                cnt++;
            else
                cnt--;
        }

        // checking if the stored element
        //  is the majority element:
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == el)
                cnt1++;
        }

        if (cnt1 > (n / 2))
            return el;
        return -1;
    }
};






class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Moore's Voting algorithm
        int el = nums[0]; // Initialize el with the first element
        int cnt = 1;      // Start with a count of 1 for the first element

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == el)
            {
                cnt++;
            }
            else
            {
                cnt--;
                if (cnt == 0)
                {
                    el = nums[i];
                    cnt = 1;
                }
            }
        }

        return el;
    }
};
