def create_big_hash(data)
  h = Hash.new do |h,k|
    h[k] = Array.new
  end    
  data.each_line do |l|
    w = l.strip
    # add all words with one ?
    w.length.times do |i| 
      q = String.new(w)
      q[i] = "?"
      h[q].push w
    end
    # add all words with two ??
    (w.length-1).times do |i|
      q = String.new(w)      
      q[i, 2] = "??"
      h[q].push w
    end
  end
  h
end

# prepare data    
t = Time.new
h = create_big_hash(File.read("wordlist.txt"))
puts "#{Time.new - t} sec preparing data\n#{h.size} entries in big hash"

# use prepared data for query
t = Time.new
h["?ood"].each do |w|
  puts w
end
puts (Time.new - t)
