import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val arr = IntArray(2 * n)
        for (i in 0 until (2 * n)) {
            arr[i] = sc.nextInt()
        }
        val mini = IntArray(2 * n)
        arr.sort()
        for(i in 0 until (2 * n)) {
            val left = if(i > 0) arr[i] - arr[i - 1] else Integer.MAX_VALUE
            val right = if(i < (2 * n) - 1) arr[i + 1] - arr[i] else Integer.MAX_VALUE
            mini[i] = minOf(left, right)
        }
        var op = true
        for(i in 1 until (2 * n) step 2) {
            val diff = arr[i] - arr[i - 1]
//            println("$diff ${mini[i]} ${mini[i - 1]}")
            if(diff != mini[i] || diff != mini[i - 1]) {
                op = false
                break
            }
        }
        if(op) println("YES")
        else println("NO")
    }
}