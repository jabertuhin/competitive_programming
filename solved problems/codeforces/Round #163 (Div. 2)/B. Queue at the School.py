# Link: https://codeforces.com/problemset/problem/266/B


def get_updated_queue(student_queue: str, seconds: int) -> str:
    student_queue_list = list(student_queue)

    number_of_students = len(student_queue_list)
    for _ in range(seconds):
        i = 0
        while i < number_of_students:
            if student_queue_list[i] == "B" and i+1 < number_of_students and student_queue_list[i+1] == "G":
                student_queue_list[i], student_queue_list[i+1] = student_queue_list[i+1], student_queue_list[i]
                i += 2
            else:
                i += 1

    return "".join(student_queue_list)


# assert get_updated_queue("BGGBG", 1) == "GBGGB"
# assert get_updated_queue("BGGBG", 2) == "GGBGB"
# assert get_updated_queue("GGGB", 2) == "GGGB"

if __name__ == "__main__":
    n, t = [int(number) for number in input().split()]

    s = input()

    print(get_updated_queue(s, t))