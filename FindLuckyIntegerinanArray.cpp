class Solution {
public:
    int findLucky(vector<int>& arr) {
         map<int, int> count;
        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;

        }
        int lucky=-1;
        for(const pair<int, int>& p: count){
            if(p.first>=lucky &&  p.first==p.second){
                lucky=p.first;
            }
        }
        
        return lucky;
    }
};
