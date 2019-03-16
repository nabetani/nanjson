require "json"

def test(e)
  print( e.inspect, ":" )
  begin
    puts([e].to_json)
  rescue=>e
    p e
  end
end

test( Float::NAN )
test( Float::INFINITY )