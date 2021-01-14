class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        sort(people.begin(), people.end());
        int left = 0, right = people.size()-1;
        while (left <= right) {
            if (people[left] + people[right] <= limit)
                left++;
            right--;
            boats++;
        }
        return boats;
    }
};
