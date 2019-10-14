
/**
* Binary Search function which works for a sorted list of numbers
* return -1 if the ele is not found in the array
*/
fun binarySearch(arr : List<Int>, ele : Int) : Int {
	var hi = arr.size - 1
	var lo = 0
	while(lo < hi){
		// find the middle
		var mid = lo + (hi - lo) / 2
		// check middle
		if(arr[mid] == ele)
			return mid
		// middle is smaller, hence ele lies in right side
		else if(arr[mid] < ele)
			lo = mid + 1
		// middle is greater, hence ele lies in left side
		else
			hi = mid - 1
	}
	// element was not found in the array.
	return -1
}

fun main(args : Array<String>){
    val arr = listOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    var key = 7
    var index = binarySearch(arr, key)
    println("Element ${key} found at index : ${index}")
}