import array as arr 
number=arr.array('i',[1,2,4,5,7,10])
number[0]=0
print(number)
number[2:5]=arr.array('i',[6,8,9])
print(number)
len(number)
