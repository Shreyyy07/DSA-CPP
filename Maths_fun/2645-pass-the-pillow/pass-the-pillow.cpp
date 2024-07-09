class Solution {
public:
    int passThePillow(int n, int time) {

        int div=time/(n-1);
        // this will tell the direction 
        // if dir is 1 = now we will moving from r to l
        // if dir is 0(even)=moving from l to r
        int rem=time%(n-1);
        // this will tell about the position of pillow

        if(div & 1){ //if dir is odd
            return n-rem;
             //then piche move krte hue ans nikalo
        }
        return rem+1; //if even aage badho
    }
};