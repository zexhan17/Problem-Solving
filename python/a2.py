"""
There are three main tasks to complete.
(a) Write a function with the name average that takes in two inputs and calculates the arithmetic mean
(simple average) of the two numbers. You must not assume anything about the two numbers (other than
the fact that they will not be complex).

(b) Write another function named improve_guess . This improvement in guess will be made according to
the rule typically associated with the Heron of Alexandia. According to this rule:
If there is a guess a for the square root of a number x then the average of a and x/a is a better
guess.
Read through this statement carefully and write the function accordingly. You should use the function
average defined in the task above within this function.

(c) Finally, write a function sqrt similar to what we wrote in the class, except it should use the new
improve_guess function you just defined. Assume this function will only be given guesses greater
than or equal to 0.






		-----------First-Do-Your-Self------------
"""



def average(num1, num2):
	return ( num1 + num2 ) / 2

# 	-------	

def improve_guess(guess, x):
	if guess < x:
		return guess + 0.1
	else:
		return guess - 0.1

# 	-------

def good_enough(guess, x):
	if abs(guess * guess - x) < 0.1:
		return True
	else:
		return False

# 	-------

def sqrt(x, guess=0.0):
	if x < 0:
		return None
	
	if good_enough(guess, x):
		return guess
	
	else:
		new_guess = improve_guess(guess, x)
		return sqrt (x, new_guess)




if __name__ == "__main__":
	print( sqrt(36) )
