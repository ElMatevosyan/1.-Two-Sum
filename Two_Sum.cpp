#include <iostream>
#include <map>        // map
#include <vector>     // vector
#include <algorithm>  // sort

class Solution {
public:
    Solution() {}
    ~Solution() {}
    
    std::map <int, int> twoSum(std::vector<int>& nums, int target) 
    {
    std::cout <<"MyVector: ";
    sort (nums.begin(), nums.end());
    for(auto i = nums.begin(); i != nums.end(); ++i)
        {
            std::cout << *i << " ";
        }
        std::cout << std::endl;

    
    
    int l = 0;
    int r = nums.size()-1;
    std::map <int, int> result;

        while(l<r)
        {
            if ((nums[l]+nums[r]) == target)
            {
                result.emplace(l, r);
                //result.insert(make_piar(nums[l],nums[r]));
                return result;
            }
            if ((nums[l]+nums[r]) > target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }   

    return result;
    }
};

int main() {

std::vector<int> nums {5,19,2,3,9,7};
int target= 10;

Solution A;
std::map<int, int> result = A.twoSum(nums, target);

std::cout << "Solution: ";
    for(auto i : result)
    {
        std::cout << "[" << i.first << ", " << i.second << "]" << std::endl;
    }
    return 0;
}
