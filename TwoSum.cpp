#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
            
    vector<int> result;
    unordered_map<int, int> map;
            
    for(int i = 0; i < nums.size();i++){
        int complement = target - nums[i];
            
        if(map.find(complement) != map.end()){
            result.push_back(map[complement]);
            result.push_back(i);
            break;
        }else{
            map[nums[i]] = i;
        }
    }
            
    return result;
}


int main() {

    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(1);
    
    vector<int> result = twoSum(v,8);

    cout << result[0];
    
    
    return 0;
}