package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	fmt.Scanln(&c)
	fmt.Scanln(&d)
	fmt.Printf("DIFERENCA = %d\n", ((a*b)-(c*d)))
}
