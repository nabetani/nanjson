"use strict";


[
  ["undefined", undefined],
  ["null", null],
  ["[undefined]", [undefined]],
  ["[null]", [null]],
  ["{a:undefined}", {a:undefined}],
  ["{a:null}", {a:null}],
].forEach((e)=>{
  const j = JSON.stringify(e[1]);
  const s = typeof(j)=="string" ? `'${j}'` : j;
  console.log( "|`%s`|`%s`|`%s`|", e[0], s, typeof(j) );
});
