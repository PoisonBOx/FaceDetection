#ifndef Classifier_H__
#define Classifier_H__

class CClassifier
{
public:
	CClassifier();
	virtual ~CClassifier();
public:
	virtual void Train() = 0;

	virtual void Test() = 0;

private:

};

#endif // Classifier_H__
