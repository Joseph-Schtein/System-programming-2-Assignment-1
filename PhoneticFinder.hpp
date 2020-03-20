#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

namespace phonetic{
	string find(string text, string check){
		int sizeC = check.size();
		int sizeT = text.size();
		string tmp;				
		bool match = true;

		for(int i = 0 ; i < sizeT ; i++){
			if(text[i] == ' ' || i+1 == sizeT){
				
				if(i+1 == sizeT){				
					tmp = tmp + text[i];
				}
		
				if(tmp.size() == sizeC){
					match = true;
					for(int j = 0; j < sizeC && match; j++){
						match = false;
						
						if(check[j] == tmp[j]){
							match = true;
						}
						
						else if(tmp[j] == 'v' || tmp[j] == 'w' || tmp[j] == 'V' || tmp[j] == 'W'){
							if(check[j] == 'v' || check[j] == 'w' || check[j] == 'V' || check[j] == 'W')
								match = true;
						}							
						
						
						else if(tmp[j]=='b'||tmp[j] == 'f'||tmp[j]=='p'||tmp[j] =='B' ||tmp[j]=='F'||tmp[j] == 'P'){
						if(check[j]=='b'||check[j]=='f'||check[j]=='p'||check[j] =='B' ||check[j]=='F'||check[j]=='P')
							match = true;
						}							
						

						else if(tmp[j] == 'g' || tmp[j] == 'j' || tmp[j] == 'G' || tmp[j] == 'J'){
							if(check[j] == 'g' || check[j] == 'j' || check[j] == 'G' || check[j] == 'J')
								match = true;
						}							
						

						else if(tmp[j]=='c'||tmp[j] == 'k'||tmp[j]=='q'||tmp[j] =='C' ||tmp[j]=='K'||tmp[j] == 'Q'){
						if(check[j]=='c'||check[j]=='k'||check[j]=='q'||check[j] =='C'||check[j]=='K'||check[j]=='Q')
							match = true;
						}							
						

						else if(tmp[j] == 's' || tmp[j] == 'z' || tmp[j] == 'S' || tmp[j] == 'Z'){
							if(check[j] == 's' || check[j] == 'z' || check[j] == 'S' || check[j] == 'Z')
								match = true;
						}							
						
						
						else if(tmp[j] == 'd' || tmp[j] == 't' || tmp[j] == 'D' || tmp[j] == 'T'){
							if(check[j] == 'd' || check[j] == 't' || check[j] == 'D' || check[j] == 'T')
								match = true;							
						}

						else if(tmp[j] == 'o' || tmp[j] == 'u' || tmp[j] == 'O' || tmp[j] == 'U'){
							if(check[j] == 'o' || check[j] == 'u' || check[j] == 'O' || check[j] == 'U')
								match = true;
						}							
						

						else if(tmp[j] == 'y' || tmp[j] == 'i' || tmp[j] == 'Y' || tmp[j] == 'I'){
							if(check[j] == 'y' || check[j] == 'i' || check[j] == 'Y' || check[j] == 'I')
								match = true;
						}							
							
					}// End the inner loop 

					if(match)	
						break;
					
					else
						tmp.clear();						
					
				}// End if size equal
				
				else
					tmp.clear();

			}//End if check word
			
			else
				tmp = tmp+text[i];
						
		}//End for reading the given text

		if(match)
			return tmp;
		
		else
			throw;
	}	
}
