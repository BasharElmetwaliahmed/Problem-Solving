class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int point=0;
        int arr[]={0};
        int value=0;
 
        for(int i=0;i<gain.size();i++){
            value+=gain[i];
          point=max(point,value);
        }
        

        return point;
        
    }
};
