class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];
    }
};

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Brute Forcr
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                    cnt++;
            }
            if (cnt > n / 2)
                return nums[i];
        }
        return -1;
    }
};

class Solution
{
public:
    int majorityElement(vector<int> &v)
    {
        // Better approach
        int n = v.size();

        // declaring a map:
        map<int, int> mpp;

        // storing the elements with its occurnce:
        for (int i = 0; i < n; i++)
        {
            mpp[v[i]]++;
        }

        // searching for the majority element:
        for (auto it : mpp)
        {
            if (it.second > (n / 2))
            {
                return it.first;
            }
        }

        return -1;
    }
};

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Optimal
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
