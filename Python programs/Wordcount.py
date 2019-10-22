from pyspark import SparkContext, SparkConf
if __name__ == "__main__":
   conf = SparkConf().setAppName("Wordcount in  - Python").setMaster("local")
   sc = SparkContext(conf=conf)
   words = sc.textFile("/home/anandshukla/Downloads/test_data.txt").flatMap(lambda line: line.split(" "))
   wordCounts = words.map(lambda word: (word, 1)).reduceByKey(lambda a,b:a +b)
   v = wordCounts.collect()
   for a in v:
       print(a)
