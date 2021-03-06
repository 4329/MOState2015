#ifndef CONFIGURABLE_H
#define CONFIGURABLE_H
class Configurable
{
public:
	virtual void RetrieveConfig() = 0;
	virtual void StoreConfig() = 0;
	virtual void Configure() = 0;
};
#endif
