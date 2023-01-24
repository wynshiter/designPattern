//Adapter.h 
#ifndef _ADAPTER_H_ 
#define _ADAPTER_H_ 
class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
protected:
private:
};
class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
protected:
private:
};
class Adapter :public Target, private Adaptee
{
public:
	Adapter();
	~Adapter();
	void Request();
protected:
private:
};

Target::Target()
{
}
Target::~Target()
{
}
void Target::Request()
{
	std::cout << "Target::Request" << std::endl;
}
Adaptee::Adaptee()
{
}
Adaptee::~Adaptee()
{
}
void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee::SpecificRequest"
		<< std::endl;
}
Adapter::Adapter()
{
}
Adapter::~Adapter()
{
}
void Adapter::Request()
{
	this->SpecificRequest();
}
#endif //~_ADAPTER_H_