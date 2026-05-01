def singleNumber(nums: list[int]) -> int:
    ans = 0
    for n in nums:
        ans ^= n
    return ans


nums: list[int] = [1, 2, 2, 3, 3]
print(singleNumber(nums))
