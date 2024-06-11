/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let cnt = 1, pos = -1;
    let n = nums.length;
    for(let i = 1; i < n; i++){
        if(nums[i] === nums[i - 1]){        // 1 1 2
            cnt+=1; 
            pos = i;
            if(cnt > 2){
                nums.splice(i, 1); 
                cnt-=1;
                n--;
                i--;
            }
        }
        else {
            cnt = 1;  
        }
    }
};