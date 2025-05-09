import random
import string

length = int(input("Password length: "))
all_chars = string.ascii_letters + string.digits + string.punctuation
password = ''.join(random.choices(all_chars, k=length))
print("🔑 Generated password:", password)
