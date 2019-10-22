#!/bin/bash
echo "input the number"
read num
p=""
ct="0"
r=0
for((i=num;i>0;i=i/2))
do
k=$(($i%2))
if(($k == 0))
then
p=$(($ct))$p
else
p=$(($k))$p
fi
if(($k == 1))
then
r=$(($r+1))
fi
done
echo "Binary equivalent of $num is" $p
b=$(($r%2))
if(($b == 0))
then
echo "$num is evil"
else
echo "$num is not evil"
fi
