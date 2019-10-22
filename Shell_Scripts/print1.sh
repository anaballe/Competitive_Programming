#!/bin/bash
echo "Enter the name of file"
read file
echo "Enter the line number value1 and value2"
read l1
read l2
p="p"
if [ -f "$file" ];then
sed -n $l1,$l2$p $file
fi
