import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val arr = Array(n) { 0 }
        val freq = Array(n + 1) { 0 }
        val pref = Array(n + 1) { 0L }
        for(i in 0 until n) {
            arr[i] = sc.nextInt()
            freq[arr[i]]++
        }
        var ans = 0L
        freq.forEachIndexed { i, f ->
            pref[i] = f.toLong()
            if(i > 0) pref[i] += pref[i - 1]
        }
        for(i in 0..n) {
            val left = pref[i] - freq[i]
            val me = freq[i].toLong()
            if(me >= 2) {
                ans += (me * (me - 1) * left) / 2
            }
            if(me >= 3) {
                ans += (me * (me - 1) * (me - 2)) / 6
            }
        }
        println(ans)
    }
}