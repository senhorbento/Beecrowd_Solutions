package main

import "fmt"

func main() {
    var a,b int
	var c, r float64
	fmt.Scanln(&a, &b, &c)
    d := float64(b)  
    r = d*c
    fmt.Scanln(&a, &b, &c)
    e := float64(b) 
    r += e*c
	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", r)
}
