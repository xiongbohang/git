# /bin/bash
echo please input two number:
read a
read b
if [[ $a>$b ]]
then 
echo " the greater is $a, the less is $b"
elif [[ $a<$b ]] 
then
echo " the greater is $b, the less is $a"  
else
echo $a is equal to $b
fi
