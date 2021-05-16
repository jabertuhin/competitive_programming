#-------------------------------------------------------------#
# Problem name: 11988 Broken Keyboard (a.k.a. Beiju Text)
# Probelm Link: https://onlinejudge.org/external/119/11988.pdf
# Solution: First think about the normal scenario, when we type something its by default cursour position is at "end". So, in this problem mainly we have to deal with "home" button.
# If we can track the characters which were appended left, and just merge it with the actual string, we are good to go.
# Fo this reason, I used deqeue which has the function appendleft(). I also used  `append_left` flag to determine when to append character in the actual string and when to append it to the temp string.
#-------------------------------------------------------------#
from sys import stdin
from collections import deque


for line in stdin:
    # striping trailing new line character
    line = line.rstrip()

    str_container = deque()
    temp_str_container = ""
    append_left = False
    for char in line:
        if char == '[':
            append_left = True
            if len(temp_str_container):
                str_container.appendleft(temp_str_container)
                temp_str_container = ""
            continue
        if char == ']':            
            append_left = False
            if len(temp_str_container):
                str_container.appendleft(temp_str_container)
                temp_str_container = ""
            continue

        if append_left:
            temp_str_container += char
        else:
            str_container.append(char)
    
    if len(temp_str_container):
        str_container.appendleft(temp_str_container)

    print("".join(list(str_container)))

