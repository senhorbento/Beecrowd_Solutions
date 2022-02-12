package main

import "fmt"

func main() {
	var a, b float64
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	fmt.Printf("MEDIA = %.5f\n", ((a*3.5)+(b*7.5))/11)
}
