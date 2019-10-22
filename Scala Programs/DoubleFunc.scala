import java.io._
object DoubleFunc {
 def main(args:Array[String])={
   println("Enter the numbers a and b")
   var a = readInt()
   var b = readInt()
   var s = multiplyby2(add(a,b))
   println(s)
 }
  def add(a:Int,b:Int):Int={
    var c = a + b
    c
  }
  def multiplyby2(a:Int):Int={
    var c = a * 2
    c
  }
}
