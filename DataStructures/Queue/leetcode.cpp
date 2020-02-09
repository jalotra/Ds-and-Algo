
#include "bits/stdc++.h"

using namespace std;

int reverse(int x) {
       // I have to compute the remainder each time
        long long int reverse_1 = 0 ;
        long long int abs_x = abs(x);
        if(x == 0)
        {
            return x;
        }
        while(abs_x > 0)
        {
            int rem = abs_x%10;
            reverse_1 = reverse_1*10 +rem;
            abs_x = abs_x/10;
        }
        
        if(x < 0 && reverse_1<=pow(2,31)-1 && reverse_1>= -pow(2,31))
        {
            int result = -reverse_1;
            return result;
        }
        
        else if(x>0 && reverse_1<=pow(2,31)-1 && reverse_1>= -pow(2,31))
        {
            int result = reverse_1;
            return result;
        }
        else
        {
            return 0;
        }
        
    }

    int main()
    {
        cout << reverse(-2137965653) <<endl;
    }