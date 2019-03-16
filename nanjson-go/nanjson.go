package main

import (
	"encoding/json"
	"fmt"
	"math"
)

func test(val float64) {
	e := []float64{val}
	j, err := json.Marshal(e)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(string(j))
	}
}

func main() {
	test(math.NaN())
	test(math.Inf(1))
}
