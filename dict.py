dict = { 10 : "ten", 20 : "twnenty",30 : "thirty", 40 : "fourty" }

print("keys :", dict.keys())
print("values :", dict.values())

print("keys:")

for k in dict:
    print(k)
for k in dict:
    val = dict.get(k)
    print(val)
