package main

import "fmt"

func main() {
    	var a int
    	fmt.Scanln(&a)
    	e := float64(a) 
    	r := float64((4/3.0)*3.14159*(e*e*e))
	fmt.Printf("VOLUME = %.3f\n", r)
}
