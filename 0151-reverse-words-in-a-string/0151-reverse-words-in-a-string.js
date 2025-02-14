/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let array = [];
    let str = "";

    for(let i = 0; i < s.length; i++){
        if(s[i] === ' '){
            let withoutTrim = str.trim();
            if(withoutTrim !== '')
                array.push(withoutTrim);
            str="";
        }
        else {
            str += s[i];
        }
    }
    if(str.trim() !== '')
        array.push(str.trim());

    
    array.reverse();

    const result = array.join(" ");

    return result;



    

};