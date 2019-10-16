struct human {
			char *firstName; 
			int height;
			};

struct human createHuman();
void printHuman(struct human h0);
void changeFirstName(struct human *toChange, char *newFirst);
