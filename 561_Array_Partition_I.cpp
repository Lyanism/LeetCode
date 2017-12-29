#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class solution
{
    public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < nums.size(); i += 2)
        {
            res += nums[i];
        }
        
        return res;
    }
};

int main()
{
    solution solut;

    int num[4] = {2,5,1,8};
    
    int numLength = sizeof(num) / sizeof(num[0]);

    //cout<< sizeof(num)<<endl;

    vector<int> nums(num,num+numLength);
    cout<<"the print out array is " << solut.arrayPairSum(nums) <<endl;
    
    return 0;

    
}