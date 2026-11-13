class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum = 0;
        
        for (const auto& pile : piles){
            pq.push(pile);
        }
        
        while (k--){
            int max = pq.top(); pq.pop();
            max -= max / 2;
            pq.push(max);
        }
        
        while(!pq.empty()){
            sum += pq.top(); pq.pop();
        }
        return sum;
    }
};