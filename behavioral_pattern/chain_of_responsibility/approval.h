#ifndef _APPROVAL_
#define _APPROVAL_

class Approval
{

public:
    Approval();
    virtual ~Approval();

    virtual void review(int amount);
    void setnext(Approval *);

protected:
    Approval *m_next;

};

#endif