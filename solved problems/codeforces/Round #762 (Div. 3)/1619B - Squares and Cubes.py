import math
 
test_cases = int(input())
 
for i in range(test_cases):
	n = int(input())
	
	num_set = set()
	
	sqrt_range = math.floor(math.sqrt(n))
	
	for num in range(1, sqrt_range+1):
		sq_num = num*num
		cube_num = num*num*num
		
		if sq_num <= n:
			num_set.add(sq_num)
		if cube_num <= n:
			num_set.add(cube_num)
	
	print(len(num_set))