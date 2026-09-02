#typehints
#mypy 
#docstrings

def meow(n: int) -> str:
    """Meow n times."""
    return "meow\n" * n

number: int = int(input("number: "))
meows: str = meow(number)
print(meows)