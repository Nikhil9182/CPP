class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int travelTimeSum[3] = {0,0,0};
        int sum = 0;
        int size = garbage.size();
        for(int i = 0; i < size;i++)
        {
            sum+=garbage[i].length();
            if(i == 0)
                continue;
            else
            {
                if(garbage[i].find('M') != string::npos)
                {
                    sum += travel[i-1] + travelTimeSum[0];
                    travelTimeSum[0] = 0;
                }
                else
                {
                    travelTimeSum[0] += travel[i-1];
                }
                
                if(garbage[i].find('G') != string::npos)
                {
                    sum += travel[i-1] + travelTimeSum[1];
                    travelTimeSum[1] = 0;
                }
                else
                {
                    travelTimeSum[1] += travel[i-1];
                }
                
                if(garbage[i].find('P') != string::npos)
                {
                    sum += travel[i-1] + travelTimeSum[2];
                    travelTimeSum[2] = 0;
                }
                else
                {
                    travelTimeSum[2] += travel[i-1];
                }
            }
        }
        return sum;
    }
};