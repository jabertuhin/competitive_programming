def solution(num: int, summation: int) -> int:
    answer = ""

    while summation:
        digit_1 = num%10
        digit_2 = summation%10
    
        if digit_1 <= digit_2:
            diff = digit_2 - digit_1
            answer += str(diff)
        else:
            summation = summation // 10
            temp_num = (summation%10)*10 + digit_2            

            if temp_num > digit_1 and (temp_num >= 10 and temp_num <=18):
                diff = temp_num - digit_1
                answer += str(diff)
            else:
                return -1

        num = num//10
        summation = summation//10
    
    if num:
        return -1

    return int(answer[::-1])


if __name__ == "__main__":
    testcase_number = int(input())

    for i in range(testcase_number):
        input_string = input()
        a, s = map(int, input_string.split())

        print(solution(a, s))
