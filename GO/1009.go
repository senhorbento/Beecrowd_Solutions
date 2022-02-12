package main

import "fmt"

func main() {
    var a string
	var b, c float64
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	fmt.Scanln(&c)
	fmt.Printf("TOTAL = R$ %.2f\n", b+(0.15*c))
}
