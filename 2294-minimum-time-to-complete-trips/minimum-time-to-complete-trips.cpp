class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {

     
        long long minTime = (long long)*min_element(time.begin(), time.end());
        
   
        long long left = 1;
        long long right = minTime * totalTrips; 
        long long ans = right;

        while(left <= right) {
            long long mid = left + (right - left) / 2;
            long long currentTrips = 0;
            
            for (int t : time) {
                currentTrips += (mid / t);
                if (currentTrips >= totalTrips) break; 
            }
            
            if (currentTrips >= totalTrips) {
                ans = mid;
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
        return ans;
    }
};