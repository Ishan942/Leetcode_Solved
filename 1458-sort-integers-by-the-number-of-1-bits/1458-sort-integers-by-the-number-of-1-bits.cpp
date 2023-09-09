class Solution {
public:
    static int count(int a) {
        int countn = 0;
        while (a) {
            countn += a & 1;
            a >>= 1;
        }
        return countn;
    }

    static bool compareBits(int a, int b) {
        int ac = count(a);
        int bc = count(b);
        if (ac < bc) {
            return true;
        } else if (ac > bc) {
            return false;
        }
        return a < b;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compareBits);
        return arr;
    }
};
