class	TypeClass{
	
	private:
		Weapon my_weapon;

	public:
		TypeClass(Weapon &weap);		//Constracter
		~TypeClass();				//Destructer
		void	Function(Weapon& weap1);
}

TypeClass::TypeClass(Weapon& weap): my_weapon(_weap)	//member initilazer
{

}

void	TypeClass::Funtion(Weapon& weap1)      //: my_weapon(_weap) is impossible in this scope cause it only used for contructer
{

}
