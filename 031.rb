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
puts count