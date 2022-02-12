package main

import "fmt"

func main() {
	var a, b float64
	fmt.Scanln(&a)
	b = (a*a)*3.14159
	fmt.Printf("A=%.4f\n",b)
}
