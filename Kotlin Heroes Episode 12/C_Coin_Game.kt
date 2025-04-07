import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    val s = sc.nextLine()
    var q = sc.nextInt()
    val n = s.length
    val prefg = IntArray(n)
    val prefs = IntArray(n)
    val prefb = IntArray(n)
    for(i in 0 until n) {
        if(s[i] == 'G') {
            prefg[i]++
        } else if(s[i] == 'S') {
            prefs[i]++
        } else {
            prefb[i]++
        }
        if(i > 0) {
            prefg[i] += prefg[i - 1]
            prefs[i] += prefs[i - 1]
            prefb[i] += prefb[i - 1]
        }
    }
    while(q-- > 0) {
        var l = sc.nextInt()
        var r = sc.nextInt()
        l--
        r--
        val g = prefg[r] - (if(l > 0) prefg[l - 1] else 0)
        val s = prefs[r] - (if(l > 0) prefs[l - 1] else 0)
        val b = prefb[r] - (if(l > 0) prefb[l - 1] else 0)
        val a = arrayOf(g, s, b)
        a.sort()
        println(a[0] + a[2])
    }
}