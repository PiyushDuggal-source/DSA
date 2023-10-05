# def groupAnagrams(strs):
#     hashMap = {}
#     for i in strs:
#         sortedI = sorted(i)
#         si = "".join(sortedI)
#         print(sortedI)
#         for j in strs:
#             if si == "".join(sorted(j)):
#                 if si in hashMap.keys():
#                     hashMap[si].append("".join(sorted(j)))
#                 else:
#                     hashMap[si] = []
#     print(hashMap)
def groupAnagrams(strs):
        hashMap = defaultdict(list)
        for i in strs:
            count = [0] * 26
            for chr in i:
                count[ord(chr) - ord("a")] += 1

            hashMap[tuple(count)].append(i)
        
        return hashMap.values()

groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"])
