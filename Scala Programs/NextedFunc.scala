object NextedFunc {
 def main(args:Array[String])={
   println("Enter the values of a ,b and c")
   var a = readInt()
   var b = readInt()
   var c = readInt()
   var Sum = add(a,b,c)
   println("the sum is "+Sum)
 }
  def add(a:Int,b:Int,c:Int):Int={
    def add2(x:Int,y:Int):Int={
      x+y
    }
    add2(a,add2(b,c))
  }
}
