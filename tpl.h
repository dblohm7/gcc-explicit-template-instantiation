#ifndef tpl_h
#define tpl_h

template <class T>
class base
{
public:
  void bam();
};

class foo : public base<foo>
{
public:
};

#endif
