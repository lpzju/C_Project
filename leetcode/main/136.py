nums = [4,1,2,1,2]
d1 = {}
for i in nums:
    d1[i] = d1.get(i,0) + 1
print(d1)
