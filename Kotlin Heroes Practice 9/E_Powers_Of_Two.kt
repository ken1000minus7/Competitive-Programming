import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var n = sc.nextLong()
    var k = sc.nextInt()
    val pows: Queue<Long> = LinkedList<Long>()
    var temp = n
    var p = 0
    while(temp > 0) {
        if(temp % 2 != 0L) {
            pows.offer(Math.pow(2.0, p.toDouble()).toLong())
        }
        temp /= 2
        p++
    }
    if(pows.size > k) {
        println("NO")
        return
    }
    var i = 0
    var left = k 
    val ans = mutableListOf<Long>()
    while(left > 0 && pows.isNotEmpty()) {
        if(pows.peek() == 1L || pows.size == left) {
            ans.add(pows.poll())
            i++
            left--
        }
        else {
            val nnumber = pows.poll() / 2
            pows.offer(nnumber)
            pows.offer(nnumber)
        }
    }
    ans.sort()
    if(ans.size != k) {
        println("NO")
    }
    else {
        println("YES")
        for(a in ans) {
            print(a.toString() + " ")
        }
        println()
    }
    sc.close()
}