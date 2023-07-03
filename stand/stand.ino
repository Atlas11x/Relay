#include "relay.h"

Relay* test = new Relay();

void setup()
{
    test->init();
}

void loop()
{
  test->relay_on();
//  if (test != NULL)
//  {
//    delete test;
//  }
}
