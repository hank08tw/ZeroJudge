'''
class employee:
    '類文檔字符串'
    num=0#類變量 靜態變量 所有的實例跟這個class共享
    def __init__(self,name,salary):#實例變量 每個變量獨立都有name,salary變量 創建實例時執行__init__
        print("父類創建")
        self.name=name
        self.salary=salary
        employee.num+=1
    def __del__(self):
        name=__class__.__name__
        print(name+'父類銷毀')
    def dispnum(self):
        print(employee.num)
    def dispname(self):
        print(self.name,self.salary)

class small_employee(employee):#可以多重繼承
    num=0
    def __init__(self,name,salary):
        print("子類創建")
        self.name = name
        self.salary = salary
        small_employee.num+=1
    def __del__(self):
        name=__class__.__name__
        print(name+'子類銷毀')
    def dispnum(self):#可以override覆蓋父親函數
        print(small_employee.num)
e1=employee('hank',5000)
e2=employee('jeff',1000)
print(employee.num)
print(e1.num)
print(e2.num)
e1.dispnum()
e2.dispnum()
#employee.dispnum()錯誤 帶self的函數只有實例才能呼叫
e1.dispname()
e2.dispname()
#添加修改刪除實例的屬性
e1.age=10
e1.age=12
print(e1.age)
del e1.age
del e1
#python class內置的屬性
print (employee.__doc__)#docstring
print (employee.__name__)#class name
print (employee.__module__)#這個class所在的module 一般是__main__
print (employee.__bases__)#所以父類組成的tuple
print (employee.__dict__)#屬性 每個函數所在的地址等等
mom=small_employee('ash',50)
'''

def ispalindrome(s):
    #start=0
    #end=len(s)-1
    if len(s)%2==0:
        for i in range(int(len(s)/2)):
            if s[i]!=s[len(s)-i-1]:
                return False

    else:
        for i in range(int(len(s)/2)+1):
            if s[i]!=s[len(s)-i-1]:
                return False
    return True

def dfs(ans,tmp,start,last,s):
    if last==len(s):
        if ispalindrome(s[start:last]):
            tmp.append(s[start:last])
            ans.append(list(tmp))
            tmp.pop(len(tmp)-1)
    else:#如果前面是不是回文，不能砍斷（減枝）因為砍斷你就一一段不是回文的 如果前面是回文 可砍斷可不斷
        dfs(ans,tmp,start,last+1,s)#不砍斷
        if ispalindrome(s[start:last]):#砍斷（只有前面是回文才能砍）
            tmp.append(s[start:last])
            dfs(ans,tmp,last,last+1,s)
            tmp.pop()
def partition(s):
    ans=[]
    tmp=[]
    dfs(ans,tmp,0,1,s)
    return ans
print(partition('bbab'))
print(ispalindrome('bbab'))
print(sorted([3,4,2,1]))


a=[1]
b=[2,3]
a.append(b)
b.append(3)
print(a)
print([2,3,3]==a[1])


"""
def uniquePathsWithObstacles(obstacleGrid):
    
    #:type obstacleGrid: List[List[int]]
    #:rtype: int
    
    ans = [0 for i in range(len(obstacleGrid[0]))]
    for i in range(len(obstacleGrid)):
        for j in range(1, len(obstacleGrid[0])):
            if obstacleGrid[i][j] == 1:
                ans[j] = 0
            else:
                ans[j] = ans[j - 1] + ans[j]
    return ans[len(obstacleGrid[0] )-1]

"""
digits=[9,9,9,9]
plusone=True
for i in range(len(digits) - 1, -1, -1):
    if digits[i] == 9 and plusone:
        digits[i] = 0
    elif digits[i] != 9 and plusone:
        digits[i] += 1
        plusone=False
    else:
        break
if plusone:
    digits.insert(0, 1)
print(digits)

num=[5,2,1,3]
num=sorted(num)
print(num)