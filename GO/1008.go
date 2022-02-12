package main

import "fmt"

func main() {
	var a, b int
	var c float64
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	fmt.Scanln(&c)
	fmt.Printf("NUMBER = %d\n", a)
	d := float64(b)
	c = d * c
	fmt.Printf("SALARY = U$ %.2f\n", c)
}
