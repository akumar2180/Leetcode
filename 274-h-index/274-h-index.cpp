class Solution {
public:
    int hIndex(vector<int>& citations) {
        if (citations.size() == 0) return 0;
	sort(citations.begin(), citations.end());
	reverse(citations.begin(), citations.end());
	int hi = 0;
	int i = 1;
	while (i - 1 < citations.size() && citations[i-1] >= i) {
		hi = i;
		i++;
	}
	return hi;
    }
};