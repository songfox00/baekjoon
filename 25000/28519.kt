import kotlin.math.*

fun main() {
   
    var (n,m) = readLine()!!.split(" ").map {it.toInt()}
    
    if(n>m){
    	var tmp=n
    	n=m
    	m=tmp
    }
    
    println(min(n+m, 2*n+1))
    	
}