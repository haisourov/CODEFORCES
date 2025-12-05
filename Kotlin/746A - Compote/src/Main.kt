fun main(args: Array<String>) {
    val a = readln().toInt()
    val b = readln().toInt()
    val c = readln().toInt()
    for (i in a downTo 1){
        if (b >= 2*i && c >= 4*i) {
            println(7*i)
            return
        }
    }
    println(0)
}