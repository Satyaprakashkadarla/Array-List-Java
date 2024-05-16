def findMedianSortedArrays(nums1, nums2):
    if len(nums1) > len(nums2):
        nums1, nums2 = nums2, nums1
    
    m = len(nums1)
    n = len(nums2)
    total_half_len = (m + n + 1) // 2
    
    left = 0
   
