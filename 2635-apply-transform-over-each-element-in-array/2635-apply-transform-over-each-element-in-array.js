/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let newArr = [];

    for(let i = 0; i < arr.length; i++){
        let result = fn(arr[i], i);
        newArr.push(result);
    }
   
    return newArr;
   // console.log(newArr);
};