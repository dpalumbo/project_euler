nums = []
for i in 1..999
	nums.push(i) if i%3==0 || i%5==0	
end
puts nums.inject(:+)