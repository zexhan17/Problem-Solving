/*
There are two main tasks to complete.
(a) Write a function with the name get_grade the takes in the total marks as input and calculates the grade according to FAST NUCES standard. This standard is given in the following table:

Grade	Given when marks are at least	Point equivalent
A+				90							4.00
A				86							4.00
A-				82							3.67
B+				78							3.33
B				74							3.00
B-				70							2.67
C+				66							2.33
C				62							2.00
C-				58							1.67
D+				54							1.33
D				50							1.00
F				0							0.00

Note that according to the rules, the total points scored by the student are rounded to the nearest integer before assigning them a grade.

(b) The second function you need to write is calculate_sgpa . This function takes in three inputs-	each input representing a grade received in a subject – and calculate the Semester GPA 		(SGPA) based on the point equivalent of the grades. For instance, if the function is called with the grades ’A’, ’A’ and ’D’, it will return SGPA of 3.0 since (4+4+1)/3 = 3.0. However, this function also allows the caller to calculate SGPA of less than three subjects. The way to do this is to send the value ’nothing’ as one or two of the arguments. For example, if the function is called with the values ’A’, ’B’, ’nothing’, it should return 3.5.

Algorithm 1 SGPA calculation
proccedure CALCULATE_SGPA (grade1, grade2, grade3)
	total_marks <- 0
	total_number_of_subjects <- 0
	if grade1 does not equal 'nothing' then
		increment total_number_of_subjects
		increase total_marks according to the point equivalent of grade1 (see table for point equiv.)
	if grade2 does not equal 'nothing' then
		increment total_number_of_subjects
		increase total_marks according to the point equivalent of grade2 (see table for point equiv.)
	if grade3 does not equal ‘nothing’ then
		increment total_number_of_subjects
		increase total_marks according to the point equivalent of grade3 (see table for point equiv.)
	if total_number_of_subjects is 0 then
		return 0 as answer
	SGPA ← total_marks / total_number_of_subjects
		return SGPA
		
The exact method for calculation of SGPA is given in the Algorithm 1. In this algorithm, the symbol ← is the assignment operator and ‘increment’ means to increase the value of a variable by one.

*/

function get_grade(marks){
    if (marks >= 90)
		return "A+";
	if (marks >= 86)
		return "A";
    if (marks >= 82)
		return "A-";
	if (marks >= 78)
		return "B+";
	if (marks >= 74)
		return "B";
	if (marks >= 70)
		return "B-";
	if (marks >= 66)
		return "C+";
	if (marks >= 62)
		return "C";
	if (marks >= 58)
		return "C-";
	if (marks >= 54)
		return "D+";
	if (marks >= 5)
		return "D";
	if (marks >= 0)
		return "F";
}

// Alternative to dictionary in python
let dict = new Map([
    ["A+" , 4.00],
	["A" , 4.00],
	["A-" , 3.67],
	["B+" , 3.33],
	["B" , 3.00],
	["B-" , 2.67],
	["C+" , 2.33],
	["C" , 2.00],
	["C-" , 1.67],
	["D+" , 1.33],
	["D" , 1.00],
	["F" , 0.00]
]);

function calculate_sgpa(grade1, grade2, grade3){
    let total_marks = 0
    let total_number_of_subjects = 0
    
    if (grade1 != 'nothing'){
        total_number_of_subjects += 1
        total_marks += Math.round( dict.get(grade1) )
    }
    if (grade2 != 'nothing'){
        total_number_of_subjects += 1
        total_marks += Math.round( dict.get(grade2) )
    }
    if (grade3 != 'nothing'){
        total_number_of_subjects += 1
        total_marks += Math.round( dict.get(grade3) )
    }
    if (total_number_of_subjects == 0){
        return 0
    }
    SGPA = total_marks / total_number_of_subjects
    return SGPA

}



function main(){
    // console.log(get_grade(70));
    // console.log( dict.get( 'B-' ) );
    // console.log( calculate_sgpa('A', 'B', 'nothing') ); // return 3.5 expected
    // console.log( calculate_sgpa('', '', '') ); // passin grades as parameters, expected return NaN
}

if (typeof require !== 'undefined' && require.main === module){
    main();
}
