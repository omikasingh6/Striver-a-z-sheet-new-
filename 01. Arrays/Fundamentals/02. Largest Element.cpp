/* 
Question:-Given an array of integers nums, return the value of the largest element in the array
Example 1:

Input: nums = [3, 3, 6, 1]

Output: 6

Explanation: The largest element in array is 6
Example 2:

Input: nums = [3, 3, 0, 99, -40]

Output: 99

Explanation: The largest element in array is 99
*/
//Code
#include <iostream>
#include <bits/stdc++.h>
#include<climits>
using namespace std;
int largest_element(vector<int> &nums){
    int largest = INT_MIN;
    for(int i = 0; i< nums.size();i++){
        if(largest<nums[i]) largest = nums[i];
    } return largest;
}
int main() {
   vector<int> nums = {2, -4, 4, 0, 10};
    cout<<largest_element(nums);

    return 0;
}
