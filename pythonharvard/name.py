#'sys.argv'(argument vector :- list of all the words that the human typed in at their prompt before thry hit enter  )
#'sys.exit'(to exit at that line)
import sys
if len(sys.argv) < 2 :
    sys.exit("too few arguments")
elif len(sys.argv)> 2:
    sys.exit("too many arguments")



print("my name is ", sys.argv[1])