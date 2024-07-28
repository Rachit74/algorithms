arr = [1,2,3,4,5,6,7,8]
size = len(arr)
print(arr)
target = int(input("Enter Target (element to find in array): "))

def binarySearch(arr,size,target):
    middle_index = int(size//2)

    if (target == arr[middle_index]):
        return middle_index
    
    if (target > arr[middle_index]):
        for i in range(middle_index+1,size):
            if (arr[i] == target):
                return i
    
    if (target < arr[middle_index]):
        for i in range(0,middle_index-1):
            if (arr[i] == target):
                return i
            
    return -1

print(binarySearch(arr,size,target))