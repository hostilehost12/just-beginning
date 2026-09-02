how = int(input("how many numbers you want to enter"))
number = []
for i in range(how):
    add = int(input("enter your no you want to add to the list"))
    number.append(add)
total = sum(number)
average = total/len(number)
print("Numbers:", number)
print("Ttotal:",total)
print("Average",average) 
