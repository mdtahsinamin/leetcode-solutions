/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    const isHas = haystack.includes(needle);
    if(isHas){
      return haystack.indexOf(needle);
    }
    else {
        return -1;
    }
};