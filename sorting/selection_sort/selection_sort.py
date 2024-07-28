def selectionSort(arr):
    min_index=0
    for i in range(len(arr)-1):
        min_index=i
        for j in range(i+1,len(arr)):
            if (arr[j]<arr[min_index]):
                min_index=j
        
        if (min_index != i):
            arr[i], arr[min_index] = arr[min_index], arr[i] #tuple unpacking
    return arr

print(selectionSort(arr=[5,3,4,1,2]))