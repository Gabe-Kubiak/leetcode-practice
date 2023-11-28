// #include <set>
// #include <string>
// #include <iostream>

// using namespace std;
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         set <char> used;
//         int len = 0;
//         int max = 1;
//         for(auto c : s){
//             if(used.find(c)!= used.end()){
//                 len = 0;
//             }
//             used.insert(c);
//             len++;
//             if(max < len){
//                 max = len;
//             }
            
//         }
//         return max;
//     }
// };

