echo  "Give the value of n "
read n
echo "give name of the files one by one upto n"
for((i=1;i<=n;++i))
do
read file
if [ -f "$file" ];then
echo "$file exists" 
ls -lh $file
else
echo "$file does not exists"
fi
done
