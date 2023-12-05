import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    val n = sc.nextInt()
    val freq = mutableMapOf<Int, Int>()
    val asc = mutableListOf<Int>()
    val dsc = mutableListOf<Int>()
    for(i in 0 until n) {
        val a = sc.nextInt()
        freq[a] = (freq[a] ?: 0) + 1
    }
    for(p in freq) {
        if(p.value > 2) {
            println("NO")
            return 
        }
        if(p.value > 0) asc.add(p.key)
        if(p.value == 2) dsc.add(p.key)
    }
    asc.sort()
    dsc.sortDescending()
    println("YES")
    println(asc.size)
    for(a in asc) {
        print(a.toString() + " ")
    }
    println()
    println(dsc.size)
    for(a in dsc) {
        print(a.toString() + " ")
    }
    println()
    sc.close()
}