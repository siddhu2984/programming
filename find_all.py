import re

s1 = " ramayana and mahabaratha"

l1 = re.findall(r'a', s1)

print("find all", l1)

print(len(l1))
