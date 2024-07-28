arr = [1,2,3,4,5,6,7,8,9,10]
target = int(input("Enter Target: "))

def linearSearch(arr,target):
    size = len(arr)

    for i in range(size):
        if (arr[i] == target):
            return i
    return -1

print(linearSearch(arr,target))