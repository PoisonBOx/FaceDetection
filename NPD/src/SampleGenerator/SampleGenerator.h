#ifndef __SAMPLEGENERATOR_H__
#define __SAMPLEGENERATOR_H__

#include <string>
#include "inc.h"

class CSampleGenerator
{
public:
	CSampleGenerator();
	virtual ~CSampleGenerator();

public:
	virtual void Import( const std::string& FileName ) = 0;

	virtual void GenerateSample( cv::Mat& ) = 0;
};

class CSampleGeneratorFactory
{
public:
	inline static CSampleGenerator* Create(int iType)
	{
		CSampleGenerator* pSample = nullptr;

		switch ( iType )
		{
		case 1:
			break;
		}

		CV_Assert(nullptr != pSample);

		return pSample;
	}
};

#endif // __SAMPLEGENERATOR_H__