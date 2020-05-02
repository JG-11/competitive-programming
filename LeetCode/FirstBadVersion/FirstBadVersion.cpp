// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
	public:
		int firstBadVersion(int n) {
			if(isBadVersion(1)) {	
				return 1;
			}
			
			long lower = 2, higher = n;
			
			while(lower <= higher) {
				long mid = (lower + higher) / 2;
				
				if(isBadVersion(mid)) {
					if(!isBadVersion(mid - 1)) {
						return mid;
					}
					
					higher = mid - 1;
				} else {
					lower = mid + 1;
				}
			}
			
			return 0;
		}
};
