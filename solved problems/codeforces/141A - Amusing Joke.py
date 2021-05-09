from collections import Counter

name_1 = input()
name_2 = input()
premuted_name = input()

name_concat = name_1 + name_2
name_counter = Counter(name_concat)

permuted_name_counter = Counter(premuted_name)

if name_counter == permuted_name_counter:
	print("YES")
else:
	print("NO")