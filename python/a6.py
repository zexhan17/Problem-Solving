"""
There are two main tasks to complete.

(a) 	Write a function with the name calculate_sgpa . The semantics of this function are the same as in the previous grades assignment. However, this time, we will not be passing in three inputs. We will instead be passing in a single list which has the grades in its elements. This means that now, any number of subjects can be input to this function in this single list. Make sure your function can handle any number of subjects – from 0 to say 10. The function should also be able to handle the case where a single grade is passed to it instead of a list. If an invalid grade is passed to the function, it should return None. If a None is passed to the function, it should simply return None as the output.

(b) 	Of course, the SGPA is calculated based on the credit hours of the subject. So, we need to write another function with the name calculate_sgpa_weighted . This function takes in two lists – one for the grades and another for the credit hours. To calculate the total SGPA, the following formula is used:
SGPA = (g 1 ∗ w 1 ) + (g 2 ∗ w 2 ) + . . . + (g n ∗ w n ) / w 1 + w 2 + . . . + w n

where g i are the grades and w i are the weights – in this case the credit hours which are used as weights. Ideally, you should be able to use the function calculate_sgpa in this one to ease your task. If the number of items in the two lists is not the same, the function should return None. As before, if a single subject is passed instead of a list, the function should be able to use it. Also, as before, if the list contains an invalid grade, it should return None.






----------DYS----------------------

"""

dit = {
	"A+": 4.00,
	"A": 4.00,
	"A-": 3.67,
	"B+": 3.33,
	"B": 3.00,
	"B-": 2.67,
	"C+": 2.33,
	"C": 2.00,
	"C-": 1.67,
	"D+": 1.33,
	"D": 1.00,
	"F": 0.00
	
}

#---------------

def calculate_sgpa(l):
    
    total_marks = 0
    total_number_of_subjects = 0
    # checking if None was send
    if l == None:
        return None
    
    
    for grade in l:
        # checking if invalid grade is send
        if grade not in dit:
            return None
        
        # checking nothing was not sent
        if grade != 'nothing':
            total_number_of_subjects += 1
            total_marks += round( dit[ grade ] )

    if total_number_of_subjects == 0:
        return 0

    SGPA = total_marks / total_number_of_subjects
    return SGPA
    
#---------------

def calculate_sgpa_weight(grade_l, credit_hours_l):
    
    # checking unequal lists
    if len( grade_l ) != len( credit_hours_l ):
        return None
    
    low = 0
    up = 0
    
    
    for w in credit_hours_l:
        for g in grade_l:
            
            if g == 'nothing' or g not in dit:
                return None

            g = round(  dit[ g ] )
            up += g * w
            low += w
        
    # calculating SGPA
    SGPA = up / low
    return SGPA    
 
if __name__ == '__main__':
	
	grades = ['C', 'A', 'A', 'A', 'B', 'B']
	
	# credit hours
	c_hours = [2, 3, 3, 3, 3, 4]
	
	print( calculate_sgpa( grades ) )
	print( calculate_sgpa_weight( grades, c_hours ) )
	
	
