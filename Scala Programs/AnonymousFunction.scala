object AnonymousFunction {
  def main(args: Array[String]): Unit = {
    println("Enter the numbers a and b")
    var a = readInt()
    var b = readInt()
    var sum1 = (c:Int,d:Int) => (c+d)
    var diff1 = (_:Int) - (_:Int)
    var Sumis = sum1(a,b)
    var Diffis = diff1(a,b)
    println("The sum of "+a+" and "+b+" is "+Sumis)
    println("The differnce of "+a+" and "+b+" is "+Diffis)
  }
}
