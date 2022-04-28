//#include<iostream>
//#include<vector>
//using namespace std;
//
//int findmaxconsecutiveones(vector<int>& nums) {
//    int result = 0, count = 0;
//    for (int i = 0; i < nums.size(); i++) {
//        if (nums[i] == 1) {
//            count++;
//        }
//        else {
//            result = max(result, count);
//            count = 0;
//        }
//    }
//    //c++可用max函数比较两个数大小
//    return max(result, count);
//}
//int main() {
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(0);
//    v.push_back(1);
//    int m = findmaxconsecutiveones(v);
//    cout << m << endl;
//    return 0;
//}