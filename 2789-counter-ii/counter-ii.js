/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {

    var temp=init;
    

    var increment=function(){
        temp+=1;
        return temp;


    }
    var decrement=function(){
        temp-=1;
        return temp;
    }
    var reset=function(){
        temp=init;
        return temp;
    }

    return {
        increment:increment,
        decrement:decrement,
        reset:reset

    };
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */