"""
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

"""





def is_prime(n):
    if (n==1):
        return False
    elif (n==2):
        return True;
    else:
        for x in range(2,n):
            if(n % x==0):
                return False
        return True
 #-----------    
def output_factors(num):
	ret = []
	for i in range(1, num+1):
		if num % i == 0:
			ret.append(i)
	return ret
 #-----------
def get_largest_prime(num):
	for x in reversed( range(num +1) ):
		if is_prime(x):
			return x
	return None


if __name__ == "__main__":
    
	print("check Is prime: Give a number " )
	print(is_prime(int(input())))
	
	print("Factors of a number: Give a number " )
	print( output_factors(int(input())))
	
	print("Get largest prime number: Give a number " )
	print( get_largest_prime(int(input())))

