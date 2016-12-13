#pragma once


class BaseComponent
{
public:

	virtual void update(GameObject & go);

	virtual ~BaseComponent()
	{
	}
};

