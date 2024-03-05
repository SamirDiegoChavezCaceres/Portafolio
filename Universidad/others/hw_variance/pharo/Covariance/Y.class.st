Class {
	#name : #Y,
	#superclass : #X,
	#classInstVars : [
		'a'
	],
	#category : #Covariance
}

{ #category : #accessing }
Y class >> main [
	|aVar bVar cVar xVar yVar|
		aVar := A new.
		bVar := B new.
		cVar := C new.
		xVar := X new.
		yVar := Y new.
		(yVar foo: bVar) boo.
	
]

{ #category : #inline }
Y >> foo: anotherVariable [
	^ anotherVariable.
]
