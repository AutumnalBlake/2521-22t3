for code_file in *.c
do
	gcc $code_file -o ${code_file%.*}
	echo "$code_file -> ${code_file%.*}"
done