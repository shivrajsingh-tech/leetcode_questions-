class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int ans = INT_MAX;

        int minLandFinish = INT_MAX;
        for(int i = 0; i < landStartTime.size(); i++) {
            minLandFinish = min(minLandFinish,
                                landStartTime[i] + landDuration[i]);
        }

        int minWaterFinish = INT_MAX;
        for(int i = 0; i < waterStartTime.size(); i++) {
            minWaterFinish = min(minWaterFinish,
                                 waterStartTime[i] + waterDuration[i]);
        }

        for(int j = 0; j < waterStartTime.size(); j++) {

            int start = max(minLandFinish, waterStartTime[j]);

            ans = min(ans, start + waterDuration[j]);
        }

        for(int j = 0; j < landStartTime.size(); j++) {

            int start = max(minWaterFinish, landStartTime[j]);

            ans = min(ans, start + landDuration[j]);
        }

        return ans;
    }
};