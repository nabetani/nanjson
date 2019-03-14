"use strict";

const test = (e)=>{
  try{
    console.log( ">%s: %s", e, JSON.stringify( [e] ) );
  }
  catch(err){
    console.log( ">%s: %s", e, err);
  }
};

test(NaN);
test(Infinity);
// 以下は今回の記事と関係ないけど面白いので：
test(undefined);
test(null);
test({a:undefined});
test({a:null});
