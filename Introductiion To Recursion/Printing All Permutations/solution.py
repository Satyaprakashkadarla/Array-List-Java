def permutations(string, current=""):
    if len(string) == 0:
        print(current)
    else:
        for i in range(len(string)):
            new_string = string[:i] + string[i + 1:]
            permutations(new_string, current + string[i])

input_string = "abc"
print("Permutations of '{}' are:".format(input_string))
permutations(input_string)
