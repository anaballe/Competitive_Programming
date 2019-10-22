object Recur {

  def recur(i: Int, i1: Int):Int = {
    if(i1 == 0)
      0
    else
      i + recur(i, i1 - 1)

  }

  def main(args : Array[String])={
      var a: Int = recur(10,3)
      println(a)
    }

}