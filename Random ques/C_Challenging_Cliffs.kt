import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val arr = Array(n) { 0L }
        for(i in arr.indices) {
            arr[i] = sc.nextLong()
        }
        arr.sort()
        if(n <= 2) {
            for(i in arr) {
                print(i.toString() + " ")
            }
            println()
            continue
        }
        var mini = Long.MAX_VALUE
        var ans = 0
        for(i in 0 until (n - 1)) {
            if(arr[i + 1] - arr[i] <= mini) {
                mini = arr[i + 1] - arr[i]
                ans = i
            }
        }
        for(i in (ans + 1) until n) {
            print(arr[i].toString() + " ")
        }
        for(i in 0 until (ans + 1)) {
            print(arr[i].toString() + " ")
        }
        println()
    }
}