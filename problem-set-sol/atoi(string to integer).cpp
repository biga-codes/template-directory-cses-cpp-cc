class Solution {
public:
    int myAtoi(string s) {
        int pow = 1;
        int i = 0;
        long c = 0;
        int sign = 1;
        while (s[i] == ' ') {
            i++;
        }
        if(s[i] == '-' || s[i] == '+') {
            if (s[i] == '-')
                sign = sign * -1;
            i++;
        }
        // isdigit()
        // c=c*sign; 0*0 = 0
        while (s[i] >= '0' && s[i] <= '9') {
            int curr=(s[i] - '0');
            //what if multiplication cause overflow
            if(c>((INT_MAX-curr)/10)){
                if(sign==1)return INT_MAX;
                else return INT_MIN;
            }
             c = (c * 10) + curr;

            i++;  
         
        }

        return (int)(c * sign);

      
    /* if I multiply by 10 and add this digit, will I overflow?

    if yes → return INT_MAX or INT_MIN immediately

    if no → safe to update c */
    }
};
