def isPrime(num):
    count=0
    for i in range(1,num+1):
        if num%i==0:
            count+=1
    if count==2:
        return True
    else:
        return False

l1=[]
s,e=map(int,input().split())
count_prime=0
for i in range(s,e+1):
    if(isPrime(i)):
        count_prime+=1
print(count_prime)