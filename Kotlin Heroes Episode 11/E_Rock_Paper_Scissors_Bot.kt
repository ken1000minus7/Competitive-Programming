import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    sc.nextLine()
    while(t-- > 0) {
        val s = sc.nextLine()
        var mono = 1
        var bot = 0
        var ans = s.length
        val defeatsme = { c: Char ->
            when(c) {
                'R' -> 'P'
                'P' -> 'S'
                else -> 'R'
            }
        }
        val loses = { c: Char ->
            when(c) {
                'R' -> 'S'
                'P' -> 'R'
                else -> 'P'
            }
        }
        for(i in 0 until (ans - 1)) {
            val c = loses(s[i + 1])
            if(defeatsme(c) == s[i]) bot++
            else if(loses(c) == s[i]) mono++
        }

        if(s[0] == 'P') {
            if(mono <= bot) {
                ans += 2
                mono += 2
            }
            else {
                ans++
            }
        }
        else if(s[0] == 'S') {
            ans++
            mono++
        }
        if(mono <= bot) ans += bot - mono + 1
        println(ans)
    }
}