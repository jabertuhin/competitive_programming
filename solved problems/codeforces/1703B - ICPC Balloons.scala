import scala.collection.mutable
import scala.io.StdIn._

object Main extends App {
  private val testCases = readInt()

  for(i <- 1 to testCases){
    val numberOfChars = readInt()
    val solvedProblems = readLine()

    val problemMap = mutable.Map[Char, Int]()

    var numberOfBallons = 0
    for(char <- solvedProblems){
      if (!problemMap.contains(char)){
        numberOfBallons += 2
        problemMap.put(char, 1)
      }
      else {
        numberOfBallons += 1
      }
    }
    println(numberOfBallons)
  }
}