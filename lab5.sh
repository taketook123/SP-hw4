#!/bin/bash

count=100
result=0

for ((i=0;i<count;i++)); do
	start_time=$(date +%s%3N)
	
	make

	end_time=$(date +%s%3N)
	execution_time=$((end_time - start_time))
	
	make clean
	result=$((result + execution_time))
	
	#echo "Script executed in $execution_time miliseconds."
done

result=$((result / count))
echo $result

