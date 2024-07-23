
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var frequencySort = function(nums) {
    // Step 1: Count the frequency of each value
    const freqMap = new Map();
    for (const num of nums) {
        freqMap.set(num, (freqMap.get(num) || 0) + 1);
    }
    
    // Step 2: Sort the array based on frequency and value
    nums.sort((a, b) => {
        const freqA = freqMap.get(a);
        const freqB = freqMap.get(b);
        
        if (freqA === freqB) {
            return b - a; // Sort by value in decreasing order if frequencies are the same
        }
        
        return freqA - freqB; // Sort by frequency in increasing order
    });
    
    // Step 3: Return the sorted array
    return nums;
};

