1. broute force solution


 void merge(long long a[], long long b[], int m, int n) 
        { 
            //broute force using extra space
            // this will give TLE
            vector<int> res;
            int i = 0, j = 0;
            while(m>i && n>j) {
                
                if (a[i] < b[j]) {
                    res.push_back(a[i]);
                    i++;
                } 
                else if (a[i]>b[j]) {
                    res.push_back(b[j]);
                    j++;
                }
            }
            while(m>i) {
                res.push_back(a[i++]);
            }
            while(n>j) {
                res.push_back(b[j++]);
            }
            
            int size = res.size();
            int k = 0; int x = 0;
            while(m > x) {
                a[k++] = res[x++];
            }
            k = 0;
            while(size > x) {
                b[k++] = res[x++];
            }
    
            
        } 
