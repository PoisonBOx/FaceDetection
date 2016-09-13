#ifndef FeatureExtractor_H__
#define FeatureExtractor_H__

class CFeatureExtractor
{
public:
	CFeatureExtractor();
	virtual ~CFeatureExtractor();
public:
	virtual void ExtractFeature() = 0;

private:

};

#endif // FeatureExtractor_H__
