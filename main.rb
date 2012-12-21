def euler1
	nums = []
	for i in 1..999
		nums.push(i) if i%3==0 || i%5==0	
	end
	return nums.inject(:+)
end

def euler2
	fib = [] 
	fib[0] = 1
	fib[1] = 1
	total = 0
	i = 1

	while fib[i]<4000000
		total += fib[i] if fib[i] % 2 == 0
		i+=1
		fib[i] = fib[i-1] + fib[i-2]
	end

	return total
end

def euler3
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
	return result
end

def euler31
	coins = [1,2,5,10,20,50,100,200]
	sums = [0]
	count = 0
	coins.each do |c|
		factor = 1
		tempsums = []
		while c * factor <= 200
			sums.each do |s|
				newvalue = c*factor+s
				tempsums.push(newvalue) if newvalue <= 200
				count += 1 if newvalue == 200
			end		
			factor += 1
		end
		sums.push(tempsums).flatten!	
	end
	return count
end