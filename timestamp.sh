#!/bin/bash
x=1
while [ $x -le 5 ]
do
  echo "Welcome $x times"
  x=$(( $x + 1 ))
done
#!/bin/bash
count=100
if [ $count -eq 100 ]
then
  echo "Count is 100"
fi
x=$(date)
echo $x
