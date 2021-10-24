var a,k,p,i: integer;
begin
a := random(1,100);
writeln('угадайте число: a');
while (k<>7) and (p<1) do begin 
writeln('введите число');
readln(i);
if (i>a) then begin writeln('введённое число больше, чем a');k+=1;end else
If (i<a) then begin writeln('введённое число меньше, чем a'); k+=1; end else
If (i=a) then begin writeln('вы угадали число! a=',a);p+=1;end;
end;
If k=7 then  writeln('вы не угадали число! a=',a); 
end.