import java.util.*
import kotlin.math.max

val evals = { s: String ->
    val nums = s.split("+")
    nums.map { it.toLong() }.reduce { acc, v -> acc + v}
}
fun dostuff(i: Int, s: String, dp: Array<Long>): Long {
    val n = s.length
    if(i >= n) return 0L
    if(dp[i] != -1L) return dp[i]
    var st = ""
    var maxi = 0L
    var pcount = 0
    for(j in i until n) {
        st += s[j]
        if(s[j] == '+') pcount++
        if(pcount > 1) break
        if(s[j] == '+' || (j < n - 1 && s[j + 1] == '+') || pcount < 1) continue
        val v = evals(st)
        maxi = max(maxi, v + dostuff(j + 1, s, dp))
//        println("lol $i $st $maxi")
    }
    dp[i] = maxi
    return dp[i]
}
fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    sc.nextLine()

    while(t-- > 0) {
        val s = sc.nextLine()
        val n = s.length
        val dp = Array<Long>(n) { -1 }

        println(dostuff(0, s, dp))
    }
}