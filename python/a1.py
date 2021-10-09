"""
There are two main tasks to complete.
(a) Write a function with the exact name get_area which takes the radius of a circle as input and calculates
the area. (You might want to import the value of pi from the math module for this calculation.)
(b) Write another function named output_parameter . This should, again, take in one number as input,
consider this number as the radius of a circle and calculate the parameter of the circle.
However, you area not required to return the parameter. Instead, the function should simply output the
following:
The parameter of the circle with radius (radius) is (parameter)











		Answer is down do your self before seeing anwser
		--------------
"""










from math import pi

def get_area(rad):
	return pi*rad*rad
	
def output_parameter(rad):
	p = 2*pi*rad
	print("The parameter of the circle with radius", rad, "is" , p )
	
if __name__ == "__main__":
	
	radius = 5
	print("Area is", get_area(radius) )
	output_parameter(radius)	
