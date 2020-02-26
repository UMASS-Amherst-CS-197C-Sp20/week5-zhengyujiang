gcc hw5.c
if [ $? -eq 0 ]
then
	count=0;

	./a.out 1 > q.txt;
	/bin/echo -n -e "3 gladstone\n" > sol.txt;
	diff q.txt sol.txt;
	if [ $? -eq 0 ]
	then
		echo "Question 1 correct.";
		count=$(($count+1));
	else
		echo "Question 1 incorrect. See output above.";
	fi

	./a.out 2 > q.txt;
	/bin/echo -n -e "2\n" > sol.txt;
	diff q.txt sol.txt;
	if [ $? -eq 0 ]
	then
		echo "Question 2 correct.";
		count=$(($count+1));
	else
		echo "Question 2 incorrect. See output above.";
	fi

	./a.out 3 > q.txt;
	/bin/echo -n -e "37\n" > sol.txt;
	diff q.txt sol.txt;
	if [ $? -eq 0 ]
	then
		echo "Question 3 correct.";
		count=$(($count+1));
	else
		echo "Question 3 incorrect. See output above.";
	fi

	./a.out 4 > q.txt;
	/bin/echo -n -e "50\n" > sol.txt;
	diff q.txt sol.txt;
	if [ $? -eq 0 ]
	then
		echo "Question 4 correct.";
		count=$(($count+1));
	else
		echo "Question 4 incorrect. See output above.";
	fi

	make
	./hw5 5 > q.txt;
	/bin/echo -n -e "success\n" > sol.txt;
	diff q.txt sol.txt
	if [ $? -eq 0 ]
	then
		echo "Question 5 correct.";
		count=$(($count+1));
	else
		cat q.txt;
		echo "Question 5 incorrect. See output above.";
	fi
	echo "Total: "$count"/5";
	rm q.txt &> /dev/null;
	rm sol.txt &> /dev/null;
	rm a.out &> /dev/null;
	rm hw5 &> /dev/null;
fi
