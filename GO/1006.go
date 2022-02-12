package main

import "fmt"

func main() {
	var a, b, c float64
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	fmt.Scanln(&c)
	fmt.Printf("MEDIA = %.1f\n", ((a*2)+(b*3)+(c*5))/10)
}
