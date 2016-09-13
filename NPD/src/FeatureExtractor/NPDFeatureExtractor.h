#ifndef NPDFeatureExtractor_H__
#define NPDFeatureExtractor_H__

class CFeatureExtractor;

class CNpdFeatureExtractor : public CFeatureExtractor
{
public:
	CNpdFeatureExtractor();
	~CNpdFeatureExtractor();
public:
	virtual void ExtractFeature();

private:

};

#endif // NPDFeatureExtractor_H__
