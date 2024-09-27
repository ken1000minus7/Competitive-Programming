import java.util.*
import kotlin.math.max
import kotlin.math.min

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        var ans = Int.MAX_VALUE
        val arr = Array(n) {0}
        for(i in 0 until n) {
            arr[i] = sc.nextInt()
        }
        val stuff = listOf(arr[0], arr[n - 1])
        for(a in stuff) {
            var i = -1
            var j = n
            while(i < n - 1 && arr[i + 1] == a) {
                i++
            }
            while(j > 0 && arr[j - 1] == a) {
                j--
            }
            ans = min(ans, j - i - 1)
        }
        println(max(ans, 0))
    }
}