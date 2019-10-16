fun merge(a: IntArray, b:IntArray, t:IntArray) {
    var i=0
    var j=0
    for(k in 0 until t.size) {
        if((j>=b.size) || (i<a.size && a[i]<=b[j])) {
            t[k]=a[i]
            i++
        } else {
            t[k]=b[j]
            j++
        }
    }
}

fun mergeSort(numArr:IntArray) {
    if(numArr.size<=1)
        return
    val leftArray = numArr.copyOfRange(0,numArr.size/2)
    val rightArray = numArr.copyOfRange(numArr.size/2, numArr.size)
    mergeSort(leftArray)
    mergeSort(rightArray)
    merge(leftArray,rightArray, numArr)
}

fun main(args : Array<String>) {

	val arr = intArrayOf(2, 4, 1, 7, 3, 9, 10, 5)
	println("Before Sorting")
	arr.forEach{
		print(it)
		print(" ")	
	}
	mergeSort(arr)
	println("\nAfter sorting")
	arr.forEach{
		print(it)
		print(" ")	
	}

}