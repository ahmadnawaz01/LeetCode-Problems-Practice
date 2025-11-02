class Solution {
public:
    int strStr(string haystack, string needle) {
        int hs = haystack.size();
        int ns = needle.size();
        if (ns == 0) // if empty needle
        {
            return 0;
        }
        if (ns > hs) // if needle is larger
        {
            return -1;
        }
        int foundindex = -1;
        int f = 0;
        for (int i = 0; i < hs; i++) // checks each index with needle
        {
            if (haystack[i] == needle[f]) // where needle start matching
            {
                if (f == 0) // match starting index
                {
                    foundindex = i;
                }
                f++;
                if (f == ns) // if fully matched then return simply this
                {
                    return foundindex;
                }
            } else {
                if (f > 0) // if some match the other not then check overlapping
                           // case
                {
                    i = i - f;
                }
                f = 0; // reset f needle index if not match we need to check
                       // from the needle zero index
                foundindex = -1;
            }
        }
        return -1;
    }
};