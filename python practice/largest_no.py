shopping_no = int(input("how many numbers "))
number = []
for i in range(shopping_no):
    use = int(input("enter the no : "))
    number.append(use)
print(max(number))