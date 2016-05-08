//matthew bins

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include<string>
using std::string;

namespace CS2312 {

	template<typename T>

	class less {
	public:
		bool operator()(const T& first, const T& second){
			return first < second;
		}
	};

	template<>
	class less<string> {
	public:
		bool operator()(const string& first, const string& second) {
			return first < second;
		}
	};

	template<>
	class less<const char*> {
	public:
		bool operator()(const char* first, const char* second) {
			string one, two;
			one = first;
			two = second;
			return one < two;
		}
	};


}

#endif