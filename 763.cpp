// 763. Partition Labels
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string "ababcc" can be partitioned into ["abab", "cc"], but partitions such as ["aba", "bcc"] or ["ab", "ab", "cc"] are invalid.

// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.

// Return a list of integers representing the size of these parts

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        
        vector<int> last(26, -1);
        for (int i = 0; i < s.size(); ++i) {
            last[s[i] - 'a'] = i;
        }

        int start = 0, end = 0;
        for (int i = 0; i < s.size(); ++i) {
            end = max(end, last[s[i] - 'a']); 
            if (i == end) { 
                res.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return res;
    }
};
