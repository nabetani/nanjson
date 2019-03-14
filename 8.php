<?php
function test($val)
{
  $json = json_encode([$val]);
  echo( $val );
  echo( ": " );
  if (is_string($json)){
    echo( $json."\n" );
  } else {
    echo(var_export($json));
    echo(" / ");
    echo(var_export(error_get_last())."\n");
  }
}

$inf = 9**9**9;
$nan = $inf-$inf;

test( $nan );
test( $inf );
