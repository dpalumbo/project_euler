(1..100).to_a.inject(&:*).to_s.split(//).map(&:to_i).inject(&:+)
