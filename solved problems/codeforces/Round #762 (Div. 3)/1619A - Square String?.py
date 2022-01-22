def is_square_string(word: str) -> bool:
    word_length = len(word)
    if word_length%2 == 1:
        return False
    
    if word[:word_length//2] == word[word_length//2:]:
        return True

    return False

if __name__ == "__main__":
    number_of_test_cases = int(input())

    for i in range(number_of_test_cases):
        word = input()

        if is_square_string(word=word):
            print("YES")
        else:
            print("NO")
