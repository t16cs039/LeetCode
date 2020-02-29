#include "./header/4.h"

MedianOfTwoSortedArrays::MedianOfTwoSortedArrays(){
    
    // nums1 = {1, 3};
    // nums2 = {2};

    nums1 = {1, 2};
    nums2 = {3, 4};

}

MedianOfTwoSortedArrays::~MedianOfTwoSortedArrays(){
}

double MedianOfTwoSortedArrays::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){

    int total = nums1.size() + nums2.size();
    
    if(total % 2 == 0){ // two median number
        int point1 = (total / 2) - 1;
        int point2 = (total / 2);
        int i = 0;

        double temp = 0;
        double ans = 0;

        vector<int>::iterator itr1 = nums1.begin();
        vector<int>::iterator itr2 = nums2.begin();
        cout<<"point1 "<<point1<<"point2 "<<point2<<endl;
        while(true){
            // cout<<"(*itr1) "<<(*itr1)<<" (*itr2) "<<(*itr2)<<endl;
            if(itr1 != nums1.end() && itr2 != nums2.end()){
                if((*itr1) < (*itr2)){
                    temp = (*itr1);
                    itr1++;
                }
                else{
                    temp = (*itr2);
                    itr2++;
                }
            }
            else if(itr1 != nums1.end()){
                temp = (*itr1);
                itr1++;
            }
            else{
                temp = (*itr2);
                itr2++;
            }

            if(i == point1){ans += temp;}
            if(i == point2){ans += temp; return (ans / 2);}

            i++;
        }
    }
    else{ // one median number

        int point = (total / 2);
        int i = 0;

        double ans = 0;

        vector<int>::iterator itr1 = nums1.begin();
        vector<int>::iterator itr2 = nums2.begin();
        // cout<<"point "<<point<<endl;
        while(true){
            // cout<<"(*itr1) "<<(*itr1)<<" (*itr2) "<<(*itr2)<<endl;
            if(itr1 != nums1.end() && itr2 != nums2.end()){
                if((*itr1) < (*itr2)){
                    ans = (*itr1);
                    itr1++;
                }
                else{
                    ans = (*itr2);
                    itr2++;
                }
            }
            else if(itr1 != nums1.end()){
                ans = (*itr1);
                itr1++;
            }
            else{
                ans = (*itr2);
                itr2++;
            }

            if(i == point){return ans;}

            i++;
        }

    }
}

void MedianOfTwoSortedArrays::test(){
    cout<<findMedianSortedArrays(nums1, nums2)<<endl;
}