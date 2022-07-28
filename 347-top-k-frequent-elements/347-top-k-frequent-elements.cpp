class Solution {
public:
    vector<int> topKFrequent(vector<int>& A, int k) {
        if (A.size() == k) return A;
        unordered_map<int, int> m;
        for (int n : A) m[n]++;
        vector<int> ans;
        if (m.size() == k) {
            for (auto &p : m) ans.push_back(p.first);
            return ans;
        }
        auto cmp = [&](int a, int b) { return m[a] > m[b]; };
        priority_queue<int, vector<int>, decltype(cmp)> q(cmp); // keep a min-heap of size at most k
        for (auto &p : m) {
            q.push(p.first);
            if (q.size() > k) q.pop();
        }
        while (ans.size() < k) {
            ans.push_back(q.top());
            q.pop();
        }
        return ans;
    }
};