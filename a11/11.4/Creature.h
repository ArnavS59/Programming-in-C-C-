

/*
CH-230-A
a11 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
class Creature { //self explanatory same thing as previous question
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};


class Lizard : public Creature {

    public:
    Lizard();
    ~Lizard();
    void height() const;

    protected:
        int height1;
};


class Puppy : public Creature {

    public: 
        Puppy();
        void color() const;
        ~Puppy();
    protected:
    std::string const color1; 

};


class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};