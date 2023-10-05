def topKFrequent(nums, k):
    hashMap = {}
    freq = [[] for i in range(len(nums) + 1)]

    for i in nums:
        if i in hashMap.keys():
            hashMap[i] += 1
        else:
            hashMap[i] = 1

    for key, val in hashMap.items():
        freq[val].append(key)

    print(freq)

    res = []
    for i in range(len(freq) -1, 0, -1):
        for n in freq[i]:
            res.append(n)
            if len(res) == k:
                return res



print(topKFrequent([1], 1))
