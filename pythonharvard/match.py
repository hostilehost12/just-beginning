name = input("what's your name ?")

match name:
    case"harry" |"ron":
        print("Gryffindor")
    case"hermoine":
        print("Gryffindor")
    case"draco":
        print("slytherin")
    case _:
        print("who ?")
