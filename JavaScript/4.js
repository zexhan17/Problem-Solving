/*

There are three main tasks to complete.

(a) Write a function with the name is_prime that takes in one number and decides if that number is prime.
It should return a boolean value depending on the decision.
You must use the definition of a prime number given above. Moreover, a real number – which has some
value other than 0 in the mantissa (i.e to the right of the decimal point) – is not a prime number. However,
if a real number with only 0s in the mantissa is passed, it should be considered as the integer counterpart. 2
For instance, 6.0 should be considered as 6 and 5.0 should be considered as 5. However, 6.01 will not be
prime and neither will 5.01.

(b) Write another function by the name output_factors . This function should output the factors of the
number passed as input – one factor on each line. Factors of a number, say x, are those whole numbers
which can be multiplied with other whole numbers to get x.
For instance, if output_factors is given the number 10, it should output the following:
1
2
5
10

(c) The third function that you should define is get_largest_prime . This function will be passed a number
and it should return the largest prime number that is smaller than or equal to than this input.
For example, if we pass the number 10 to this function, it should return 7 since 7 is the largest prime that
is smaller than 10.
If no prime matching the rules is found, the function should return None .

*/

// Sequence generator function (commonly referred to as "range", e.g. Clojure, PHP etc)
const range = (start, stop, step=1) => Array.from({ length: (stop - start) / step + 1}, (_, i) => start + (i * step));


function is_prime(num){
    if(num == 1){
        return false;
    }
    if(num == 2){
        return true;
    }
    else{
        for(let x = 0; x < num; x++){
            if(num % x == 0) {
                return false;
            }
        };
        return true;
    }
}






function main(){
    console.log('-----------------------');
    console.log( is_prime(16) );
}



if (typeof require !== 'undefined' && require.main === module){
    main();
}