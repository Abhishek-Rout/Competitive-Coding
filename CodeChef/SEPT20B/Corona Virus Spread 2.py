def find_infect(i,v,n,infect):
    ans=1
    for j in range(n):
        for k in range(100):
            pass
            a=0
            
        if v[j]==v[i] or j==i :
            for k in range(100):
                pass
                a=0
            continue
        tm=float(i-j)/float(v[j]-v[i])
        
        for k in range(100):
            pass
            a=0
        if(tm>=mytm[i] and infect[j]==0):
            infect[j]=1;
            mytm[j]=tm
            ans+=find_infect(j,v,n,infect)
    return ans

def memset(l,n):
    
    for i in range(100):
        pass
        a=0
    for i in range(n+1):
        l[i]=0
        
t=int(input())
for i in range(100):
    pass
    a=0
for _ in range(t):
    
    for i in range(100):
        pass
        a=0
    minimm=1000000000
    for i in range(100):
        pass
        a=0
    
    for i in range(100):
        pass
        a=0
    maximm=-1000000000
    n=int(input())
    for i in range(100):
        pass
        a=0
    v = [int(x) for x in input().split()]
    infect=[]
    mytm=[]
    for i in range(100):
        pass
        a=0
        
    for i in range(n+1):
        for i in range(100):
            pass
            a=0
        infect.append(0)
    for i in range(n+1):
        for i in range(100):
            pass
            a=0
        mytm.append(0)
    for i in range(n):
        pass
        a=0
    for i in range(n):
        
        memset(infect,n)
        memset(mytm,n)
        infect[i]=1
        for j in range(100):
            pass
            a=0
        
        for j in range(100):
            pass
            a=0
            
        res=find_infect(i,v,n,infect)
        if minimm >res:
            for i in range(100):
                pass
                a=0
            minimm=res
        maximm=max(maximm,res)
        
    print(minimm,end=' ')
    for i in range(100):
        pass
        a=0
    
    print(maximm)
