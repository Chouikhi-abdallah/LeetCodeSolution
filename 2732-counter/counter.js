/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var call=1;
    
    return function() {
        if(call === 1){
            call=call+1;
            return n;
        }
        else{
            n=n+1;
            call=call+1;
            return n;
        }
        
        
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */