class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> st;

        for(int i=0;i<prices.size();i++){
            int j=i+1;

            while(j<prices.size()){
                if(prices[i]>=prices[j]){
                    st.push_back(prices[i]-prices[j]);
                    break;
                }
                else{
                    j++;
                }
            }

            if(j==prices.size()){
                st.push_back(prices[i]);
            }
        }

        return st;
    }
};