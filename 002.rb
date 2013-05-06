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

puts total