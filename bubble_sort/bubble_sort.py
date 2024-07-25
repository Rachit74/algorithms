arr = [1,3,2,5,4]
temp=0

for i in range(len(arr)-1):
    for j in range(len(arr)-i-1):
        if (arr[j]>arr[j+1]):
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp

print(arr)