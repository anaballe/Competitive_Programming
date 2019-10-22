#!/bin/bash
echo "Enter the name of file"
read file
echo "Enter the line number value1 and value2"
read l1
read l2
p="p"
if [ -f "$file" ];then
for((i=l1;i<=l2;++i))
do
sed -n $i$p $file
done
fi

