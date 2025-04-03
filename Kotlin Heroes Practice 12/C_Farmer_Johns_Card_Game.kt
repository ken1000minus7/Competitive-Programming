import java.util.*
import kotlin.math.min

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val m = sc.nextInt()
        val arr = mutableListOf<Set<Int>>()
        var op = true
        val pos = Array(n){-1}
        for(i in 0 until n) {
            val set = HashSet<Int>()
            var mini = Integer.MAX_VALUE
            for (j in 0 until m) {
                val num = sc.nextInt()
                set.add(num)
                mini = min(mini, num)
            }
            arr.add(set)
            if(set.size != m || mini >= n || pos[mini] != -1) {
                op = false
            } else {
                pos[mini] = i
            }
        }
        if(!op) {
            println(-1)
            continue
        }
        var i = 0
        for(j in 0 until (n * m)) {
            val ind = pos[i]
            if(ind < 0 || ind >= n || !arr[ind].contains(j)) {
                op = false
                break
            }
            i = (i + 1) % n
        }
        if(op) {
            for(j in pos) {
                print("${j + 1} ")
            }
            println()
        } else {
            println(-1)
        }
    }
}