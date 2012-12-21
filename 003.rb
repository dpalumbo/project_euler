i = 2
num = 600851475143
result = 0
while num > 1
	while num % i == 0
		num = num/i 
		result = i
	end
	i+=1
end
puts result