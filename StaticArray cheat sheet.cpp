public:
	StaticArray(unsigned int sz = 10) // Constructor (size as parameter)
	StatisArray(StaticArray & tbc);	  // Copy constructor
	~StaticArray();					  // Destructor

	void set(ElementType val, unsigned int where); // Setter
	ElementType get(unsigned int where) const;     // Getter
	unsigned int size() const;					   // Always same size, once constructed

	StaticArray & operator=(const StatisArray & rhs);

	std:string toString() const;