import java.util.*

fun lowerBound(arr: LongArray, target: Long): Int {
    var low = 0
    var high = arr.size

    while (low < high) {
        val mid = low + (high - low) / 2
        if (arr[mid] < target) {
            low = mid + 1
        } else {
            high = mid
        }
    }
    return low
}

fun upperBound(arr: LongArray, target: Long): Int {
    var low = 0
    var high = arr.size

    while (low < high) {
        val mid = low + (high - low) / 2
        if (arr[mid] <= target) {
            low = mid + 1
        } else {
            high = mid
        }
    }
    return low
}

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val mini = sc.nextLong()
        val maxi = sc.nextLong()
        val arr = LongArray(n)
        for(i in arr.indices) {
            arr[i] = sc.nextLong()
        }
        arr.sort()
        val sum = arr.sum()
        val x = sum - maxi
        val y = sum - mini
        var ans = 0L
        for(i in arr.indices) {
            val lb = lowerBound(arr, x - arr[i])
            val ub = upperBound(arr, y - arr[i])
            ans += ub - lb
            if(arr[i] >= (x - arr[i]) && arr[i] <= (y - arr[i])) ans--
//            println("$lb $ub : $ans")
        }
        println(ans / 2)
    }
}

//31
//3 4 4 5 6 9
//
//4 <= i + j <= 9

/*
(3,4) X
(3,4) X
(3,5) X
(3,6)

(4,3) X
(4,4) X
(4,5) X

(4,3) X
(4,4) X
(4,5) X

(5,3) X
(5,4) X
(5,4) X

(6,3)
 */