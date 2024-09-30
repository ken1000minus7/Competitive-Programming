import java.util.Scanner
import kotlin.math.max

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val arr = mutableListOf<Int>()
        var maxi = 0
        for(i in 0 until n) {
            arr.add(sc.nextInt())
            if(i < n - 1) {
                maxi = max(maxi, arr[i])
            }
        }
        if(maxi == arr[n - 1] - 1) println(maxi)
        else println("Ambiguous")
    }
}