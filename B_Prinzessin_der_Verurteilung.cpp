class Solution {
    public:
        int maxActiveSectionsAfterTrade(string s) {
              vector<pair<char, int>> runs;
        if (s.empty()) return 0;
        
        char curr = s[0];
        int cnt = 1;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == curr) {
                cnt++;
            } else {
                runs.push_back({curr, cnt});
                curr = s[i];
                cnt = 1;
            }
        }
        runs.push_back({curr, cnt});
        
        int ogs = 0;
             for (const auto& run : runs) {
            if (run.first == '1') {
                ogs += run.second;
            }
        }
        
        int maxx = 0;
        for (int i = 0; i < runs.size(); ++i) {
            if (runs[i].first == '1') {
                if (i == 0 || i == runs.size() - 1) {
                    continue;
                }
                if (runs[i-1].first == '0' && runs[i+1].first == '0') {
                    int lenn = runs[i-1].second + runs[i].second + runs[i+1].second;
                    int gain = lenn - runs[i].second;
                    if (gain > maxx) {
                        maxx = gain;
                    }
                }
            }
        }
        
        return ogs + maxx;
        }
    };©leetcode