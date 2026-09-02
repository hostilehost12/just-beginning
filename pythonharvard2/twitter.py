#re.sub(pattern,repl,string,count=0,flags=0)
#re.split(pattern,string,maxsplit=0,flags=0)
#re.findall(pattern, string, flags=0)
import re
url = input("URL:").strip()

username = re.sub(r"https://twitter.com/", "",url)
print(f"username:{username}")