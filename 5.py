import json
import sys

def test(val):
  try:
    j = json.dumps( [val] )
    print( "%s: %s" % ( val, j ) )
  except:
    print( "%s: %s" % ( val, sys.exc_info()[1] ) )

test( float("nan") )
test( float("infinity") )
