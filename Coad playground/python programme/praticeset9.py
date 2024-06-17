f=open('sample.txt')
t=f.read()
if 'twinkal' in t:
    print("twinkal is present")
else:
    print("twinkal is present ")
f.close()