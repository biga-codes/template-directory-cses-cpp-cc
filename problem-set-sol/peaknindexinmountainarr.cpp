
class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
          int low=0;
        int high=mountainArr.length()-1;
        while(low<high){
         int mid=(low+high)/2;
      if (mountainArr.get(mid) > mountainArr.get(mid + 1)) {
                // in the descending part, peak is mid or to the left
                high = mid;
            } else {
                //in the ascending part, peak is to the right
                low = mid + 1;
            }
         
        }

        int peak=low; //peak
        int l=0;
        int h=peak; //bs on left side
        int indexl=-1;
         while(l<=h){
            int mid=(l+h)/2;
              int x=mountainArr.get(mid);
      if (target== x ) {
               
              indexl=mid;
              break;
              
            } else if (x > target) {
               
               h = mid-1;
            }
            else{
  l = mid + 1;
            }
         
        }

         //peak
        int li=peak;
        int hi=mountainArr.length()-1; //bs on right side
        int index2=-1;
         while(li<=hi){
            int mid=(li+hi)/2;
            int x=mountainArr.get(mid);
      if (target== x ) {
      
              index2=mid;
              break;
              
            } else if (x > target) {
                
             
                li = mid + 1;
            }
            else{
    hi = mid-1;
            }
         
        }


if (indexl == -1) return index2;
if (index2 == -1) return indexl;
return (indexl < index2) ? indexl : index2;

    }
};
