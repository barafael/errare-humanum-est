package main

import "fmt"

func sum4(s *int, t int, u int, v int, c chan int) {
	sum := *s + t + u + v
	*s++
	c <- sum
}

func getRef(c chan *int) {
	p := <-c
	fmt.Println(*p)
	*p++
	fmt.Println(*p)
}

func main() {
	c := make(chan int)
	num := 6
	go sum4(&num, 5, 4, 3, c)
	go sum4(&num, 3, 4, 5, c)
	x, y := <-c, <-c

	fmt.Println(x, y)
	
	pChan := make(chan *int)
	go getRef(pChan)
	go getRef(pChan)
	pChan <- &num
	pChan <- &num
}
