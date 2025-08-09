// Given a string s and a character c that occurs in s, return an array of integers answer where answer.length == s.length and answer[i] is the distance from index i to the closest occurrence of character c in s.

// The distance between two indices i and j is abs(i - j), where abs is the absolute value function/
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> position;
        vector<int> answer;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
                position.push_back(i);
        }
        
        for(int i=0; i<s.size(); i++)
        {
            int shortest_dist = INT_MAX;
            for(int j=0; j<position.size(); j++)
            {
                shortest_dist = min(shortest_dist, abs(i-position[j]));
            }
            answer.push_back(shortest_dist);
        }
        
        return answer;
    }
};