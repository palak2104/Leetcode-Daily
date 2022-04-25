class PeekingIterator : public Iterator {
public:
    vector<int>arr;
    int i=0;
    int n;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    arr=nums;
        n=nums.size();
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
    return arr[i];
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	return arr[i++];    
	}
	
	bool hasNext() const {
	return (i<n);    
	}
};
