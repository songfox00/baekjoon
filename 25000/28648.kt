fun main() {
    val n = readLine()!!.toInt()
    
    var min=10001
    
    repeat(n){
    	val (t,l) = readLine()!!.split(" ").map {it.toInt()}
    	val arrival = t+l
    	if(arrival<min)
    		min=arrival
    }
    
    println(min)
}