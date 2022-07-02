'''def merge(string, k):
    # your code goes here
    b = len(string)
    d = 0
    l = []
    a = k
    p = 0
    while b > 1: 
        l.append(string[d:k])
        d += a
        b -= a
        k += a
        p += 1
    

    for i in range(0,len(l)):
        d = l[i]
        #m = []
        s = set()
        for z in d:
            s.add(z)
        #s = {}
        #s = m
        w = ""
        k = []
        for c in s:
            w += c
        k.append(w)
        seen  = set()
    for t in range(0,p):
        for g in l[t]:
        	#only print if we haven't already seen this character
           if g not in k[t]:
                print(g,end="")
                seen.add(g)
    
merge("asadssmkk",3)

'''
def merge_the_tools(string, k):
    for i in range(0,len(string), k):
    	#slice string upto k characters
        line = string[i:i+k]
        seen = set()
        #print(seen)
        for i in line:
        	#only print if we haven't already seen this character
            if i not in seen:
                print(i,end="")
                seen.add(i)
                print(seen)
        #prints a new line
        print()
merge_the_tools("axaaxxaac", 3)
