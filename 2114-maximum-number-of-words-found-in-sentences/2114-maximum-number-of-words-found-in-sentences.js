/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
  let cnt = 0;
  for(let i = 0; i < sentences.length; i++){
    cnt = Math.max(cnt, sentences[i].split(' ').length);
  }  

  return cnt;
};