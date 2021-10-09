"""
This is a continuation of the previous assignment. So, you might want to bring in some pieces from that assignment to this one.

There are two main tasks to complete.

(a) Write a function with the name output_prime_factors that takes in a number and outputs only prime factors of that number – one on each line. This function should be able to take in any positive number (real or integer) but in case of reals, it should round it first to the nearest integer before computing the factors.

(b) The second function you need to write is get_nth_prime . This function will be given a number n as input. The function should find the n th prime number. For example, if we pass the number 1 as input, the function should return 2. If we pass in 4 as input, it should return 7 since the prime numbers are: { 2, 3, 5, 7, ... } and 7 is the fourth one. If a float is passed to this function, it should simply return None .

"""





from a4 import is_prime, get_largest_prime, output_factors
"""
try:
    from a4 import is_prime, get_largest_prime, output_factors
except:
    pass
"""
def output_prime_factors(num):
	num = round (num)
	for i in output_factors(num):
		if is_prime(i):
			print(i)
#------------
def prime_list():
	ret = []
	for i in range(100):
		if is_prime(i):
			ret.append(i)
	return ret

#------------
def get_nth_prime(n):
	p_list = prime_list()
	return p_list[n]


if __name__ == "__main__":

	#output_prime_factors( int( input( ) ) )
	print(get_nth_prime(int(input())) )
