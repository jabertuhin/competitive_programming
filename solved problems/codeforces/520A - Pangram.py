input_length = int(input())
 
input_str = input()
 
unique_chars = set(input_str.lower())
 
if len(unique_chars) >= 26:
	print("YES")
else:
	print("NO")