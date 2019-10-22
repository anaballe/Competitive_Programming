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
p=$(($p$ct))
else
p=$(($p$k))
fi
if(($k == 1))
then
r=$(($r+1))
fi
done
if(($(($r%2)) == 0))
then
echo "$num is evil"
else
echo "$num is not evil"
echo $p

