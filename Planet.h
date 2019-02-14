#ifndef planet_NM
#define planet_NM

class Planet{
	private:
		int id;
		int pos;
		int distance;
		char type;
	public:
	Planet(int);
        int orbit();
	int getID(){
	  return this->id;
	};
        int getDistance(){
	  return this->distance;
	};
        int getPos(){
	  return this->pos;
	};
	char getType(){
	  return this->type;
	};
};

#endif
