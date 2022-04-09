def search(arr,target):
        low, high = 0, len(nums) - 1
        while (low <= high):
            mid = floor((low + high) / 2)
            if nums[mid] == target: return mid
            if nums[mid] > target:
                high = mid - 1
            else:
                low = mid + 1
        return -1


if  __name__=='__main__':
    arr=list(map(int,input().rstrip().split()))
    k=int(input())
    print(search(arr,k))
