fun main(args: Array<String>) {
    val (x, y) = readLine()!!.split(" ").map { it.toInt() }
    val A = readLine()!!.split(" ").map { it.toInt() }
    var count = 0
    for (i in A){
        if (i >= A[y-1] && i > 0) count++
    }
    println(count)
}