# using 3 keywords 'try', 'except','ValueError'(remember V and E are capitalized),, 
# 'NameError'(error for things for things we did wrong in the code ),,
# 'pass' (used when not wanting to have a output but need to be observed)
#'raise'() 
def main():
    x = get_int("what's x")
    print(f"x is {x}")

def get_int(prompt):

    while True:
        try:
            x = (int(input(prompt)))
        except ValueError:
            print("x is not an integer")
        else:
            return x
main()

