password = "luffy@786"
sign  = input("enter your password : ")
count = 1
while count < 3 :
    count+= 1
    if sign != password:
        print("incorrect password,try again")
        sign  = input("enter your password")
        
    elif sign == password:
        print("correct password")
        break

if count == 3:
    print("you have exceeded the no of tries")



    
    
   