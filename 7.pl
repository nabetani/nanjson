use strict;
use warnings;
use utf8;
use JSON;

sub test{
  my $val = shift;
  my $json = encode_json( [$val] );
  print( $val, ":", $json, "\n" );
}

my $inf = 9**9**9;
my $nan = $inf - $inf;
test($nan);
test($inf);
