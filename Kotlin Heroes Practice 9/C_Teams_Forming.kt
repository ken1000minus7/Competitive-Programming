import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    val n = sc.nextInt()
    val freq = Array<Int>(101) {0}
    for(i in 0 until n) {
        val a = sc.nextInt()
        freq[a]++
    }
    val rem = mutableListOf<Int>()
    var ans = 0
    for(i in freq.indices) {
        if(freq[i] % 2 != 0) {
            rem.add(i)
        }
    }
    for(i in 0 until (rem.size - 1) step 2) {
        ans += rem[i + 1] - rem[i]
    }
    println(ans)
}