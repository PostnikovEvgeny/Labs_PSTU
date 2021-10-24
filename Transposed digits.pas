var
	 x, a, b, c, t, f:integer;
	
	begin
   a:=0;b:=0;c:=0;t:=0;
	f :=0;

	writeln( 'Введите трёхзначное число');
readln (x);
	while ((x < 100) or (x > 999)) do begin
	
		writeln('Введённое число не трёхзначное, повторите ввод');
	readln( x);
	end;
	a:= x mod 10;
	x:= x div 10;
	b:= x mod 10;
	c:= x div 10;


	while (f = 0) do begin
		
		if ((a = b) or (b = c) or (a = c)) then begin
			writeln('есть одинаковые цифры,введите новое число');
			readln(x);
			while ((x < 100) or (x > 999)) do begin
	
		writeln('Введённое число не трёхзначное, повторите ввод');
	readln( x);end;
	
	a:= x mod 10;
	x:= x div 10;
	b:= x mod 10;
	c:= x div 10;
end
		else  f:= 1; 
end;
		writeln('все возможные  последовательности чисел:');
		writeln( a, b, c);
		t:= c;
		c:= b;
		b:= t;
	writeln( a, b, c);
		t:= a;
		a:= b;
		b:= t;
	writeln( a, b, c);
		t:= a;
		a:= c;
		c:= t;
	writeln( a, b, c);
		t:= c;
		c:= b;
		b:= t;
	writeln( a, b, c);
		t:= a;
		a:= b;
		b:= t;
	writeln( a, b, c);
		t:= c;
		c:= b;
		b:= t;
	writeln( a, b, c);



		if ((a > b) and (a > c)) then begin
		
			write('Наибольшее из этих чисел:', a);
			if (b > c) then
			
				writeln (b,c)
			
			else
			
				writeln (c,b);
			
		end
		else
		begin
			if ((b > a) and (b > c)) then begin
			
				write('Наибольшее из этих чисел:',b);
				if (a > c) then
				
					writeln (a,c)
				
				else
				
					writeln (c,a);
				
			end
			else
			
				if ((c > b) and (c > a))then begin
				
					write('Наибольшее из этих чисел:',c);
					if (b > a) then
					
					writeln (b,a)
					
					else
					
						writeln (a,b);
					
				end
				else
				
				writeln (a,b);
				
			
		end;
		end.


	


			
		
