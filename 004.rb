def is_palindrome?(x)
  n=x.length
  for i in 0..(n/2).floor
    return false unless x[i]==x[n-i-1]
  end
  return true
end
champ = 0
for i in 100..999
  for j in i..999
    product = i*j
    if is_palindrome?(product.to_s)
      champ = product if product > champ
    end
  end
end
puts champ