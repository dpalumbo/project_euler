require 'date'
puts (Date.parse('1901-01-01')..Date.parse('2000-12-31')).to_a.select{|d| d.sunday? && d.day == 1}.count
