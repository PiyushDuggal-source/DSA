def containsDuplicate( nums) -> bool:
    obj = {}
    for i in range(len(nums)):

        if(nums[i] in obj.keys()):
            return True
        else:
            obj[nums[i]] = True

    print(obj)
    print(obj.keys())
    return False


print(containsDuplicate([1,2,3,4]))


