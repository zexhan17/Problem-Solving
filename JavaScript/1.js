/*
There are two main tasks to complete.
(a) Write a function with the exact name get_area which takes the radius of a circle as input and calculates
the area. (You might want to import the value of pi from the math module for this calculation.)
(b) Write another function named output_parameter . This should, again, take in one number as input,
consider this number as the radius of a circle and calculate the parameter of the circle.
However, you area not required to return the parameter. Instead, the function should simply output the
following:
The parameter of the circle with radius (radius) is (parameter)











		Answer is down do your self before seeing anwser
*/


// 1st function
function get_area(radius){
    return Math.PI * radius * radius;
}

// 2nd Function
function output_parameter(radius){
    console.log(`The parameter of the circle with radius ${radius} is ${2 * Math.PI * radius}`);
}


console.log(get_area(10));
console.log(output_parameter(10));