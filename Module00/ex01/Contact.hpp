class Contact
{
	private:
		string	name;
		string	surname;
		string	nickname;
		string	dark_scrt;
		int	number;

	public:
		void	set_name(string s);
                void	set_surname(string s);
                void  	set_nickname(string s);
                void    set_num(int);
                void  	set_secret(string s);
		
		string	get_name(void);
		string  get_surname(void);
		string  get_nickname(void);
		int 	get_num(void);
		string  get_secret(void);
};
