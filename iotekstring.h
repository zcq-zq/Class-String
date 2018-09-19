#ifndef IOTEK_STRING_H_
#define IOTEK_STRING_H_
#include<string.h>
namespace iotek
{
	class String
	{
	public:
		String(const char * = NULL);
		~String();
		String(const String&);
		//String a;a=b;
		String& operator=(const String &);
		//string a;a="hello";
		String& operator=(const char*);
		inline const char* data()const
		{
			return m_data;
		}
	private:
		char *m_data;
	};
}


#endif
