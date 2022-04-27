#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int beforeLen, maxLen = 1;
    for (int i = 0; i < nums.size(); i++) {
        beforeLen = 1;
        for (int j = i + 1; i < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                beforeLen++;
            }
            else {
                break;
            }
        }
        if (beforeLen > maxLen) {
            maxLen = beforeLen;
        }
    }
    return maxLen;
}
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int m = findMaxConsecutiveOnes(v);
    cout << m << endl;
    return 0;
}