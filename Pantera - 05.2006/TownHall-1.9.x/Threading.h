#ifndef THREADING_H
#define THREADING_H

#ifdef WIN32
#define THREAD DWORD
//typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);
#else
#define THREAD void*
typedef void* (*PTHREAD_START_ROUTINE)(void*);
#endif

class CPortableSemaphore
{
	//virtual void Initialize()=0;
};

class CPortableLock
{
public:
	virtual void SetSemaphore(CPortableSemaphore*)=0;
	virtual void Lock()=0;
	virtual void Unlock()=0;
	virtual bool IsLocked()=0;
};

class CPortableThread
{
public:
	virtual void BeginThread(PTHREAD_START_ROUTINE function, void* pInfo)=0;
	virtual void EndThread()=0;
	bool bThreading;
	bool CloseThread;
	bool ThreadReady;
	void *Info;
};

class CPortableSignal
{
public:
	virtual void Wait(unsigned long Timeout, CPortableLock* unlockme=0)=0;
	virtual void Wait(CPortableLock* unlockme=0)=0;
	virtual void Release()=0;
	virtual void Signal(bool*)=0;
};

#endif // THREADING_H
