/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
  const filterArr = [];

  arr.forEach((elt, index) => {
    const res = fn(elt, index);
    if(res){
        filterArr.push(arr[index])
    }
    
  })

  return filterArr;  
};