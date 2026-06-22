class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        const stack = [];
        const map = {
            ")" : "(",
            "}" : "{",
            "]" : "["
        }
       for(let ch of s) {
        if(ch === '(' || ch === '{' || ch === '['){
            stack.push(ch);
        }
        else{
            if(stack.length > 0 && stack[stack.length-1] === map[ch]){
                stack.pop();
            }
            else {return false}
        }
       }// loop ends here 
       return stack.length === 0 ? "true" : "false";
    }
}
