name  = input("enter your name ")
age = int(input("enter your age "))
color = input("your favourite color ? ")
dict = {"name":name,"age":age,"color": color}
print("name",dict["name"])
print("age",dict["age"])
print("dict",dict["color"])
dict["age"] = 21
del dict["color"]
print(dict)
if "name" in dict:
    print("name exists")
    