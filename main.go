package main

import (
	"fmt"
	"swig/factorial"
)

func main() {
	fmt.Println("main start")
	defer fmt.Println("main end")

	// Call the C function
	f := factorial.NewFactorial(5)
	defer factorial.DeleteFactorial(f)

	fmt.Println(f.Calculate())
}
