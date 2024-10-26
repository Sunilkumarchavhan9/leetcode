class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries){
       sort(items.begin(), items.end());
      vector<pair<int, int>>q;
      for(int i=0; i<queries.size(); i++){
        q.push_back({queries[i],i});
      }
      sort(q.begin(), q.end());
      int ptr=0, maxx=0;
      vector<int>ans(q.size());
      for(int i=0; i<q.size(); i++){
          while(ptr < items.size() && items[ptr][0] <= q[i].first){
              maxx = max(maxx, items[ptr][1]);
              ptr++;
          }
          ans[q[i].second] = maxx;
      }
      return ans;
    }
};