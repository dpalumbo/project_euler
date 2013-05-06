prime = 0
not_primes = {}

i = 1
cap = 999999 #determined cap experimentally. just needs to be bigger than the answer
cnt = 0

while cnt < 10001
  i+=1
  if !not_primes.has_key?(i)
    cnt += 1
    for j in 1..(cap/i).floor
      not_primes[j*i]=true
    end
  end
end

puts i