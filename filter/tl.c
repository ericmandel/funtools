/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <stdio.h>
#include <tl.h>

#ifdef ANSI_FUNC
double
tlp2i (double dp, double tlmin, double binsiz, int type)
#else
double tlp2i (dp, tlmin, binsiz, type)
     double dp;
     double tlmin;
     double binsiz;
     int type;
#endif
{
  if( (binsiz == 1.0) || (binsiz <= 0.0) ){
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
    default:
      return ((dp - tlmin) + 1.0);
    case 'E':
    case 'D':
      return ((dp - tlmin) + 0.5);
    }
  }
  else{
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
    default:
      return ((dp - tlmin)/binsiz + 1.0);
    case 'E':
    case 'D':
      return ((dp - tlmin)/binsiz + 0.5);
    }
  }
}

#ifdef ANSI_FUNC
int
itlp2i (double dp, double tlmin, double binsiz, int type)
#else
int itlp2i (dp, tlmin, binsiz, type)
     double dp;
     double tlmin;
     double binsiz;
     int type;
#endif
{
  /* avoid -W unused parameter warning */
  if( 0 ) type = type;

  if( (binsiz == 1.0) || (binsiz <= 0.0) ){
    return (int)((dp - tlmin) + 1.0);
  }
  else{
    return (int)((dp - tlmin)/binsiz + 1.0);
  }
}

#ifdef ANSI_FUNC
double
tli2p (double di, double tlmin, double binsiz, int type)
#else
double tli2p (di, tlmin, binsiz, type)
     double di;
     double tlmin;
     double binsiz;
     int type;
#endif
{
  if( (binsiz == 1.0) || (binsiz <= 0.0) ){
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
    default:
      return ((di - 1.0) + tlmin);
    case 'E':
    case 'D':
      return ((di - 0.5) + tlmin);
    }
  }
  else{
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
    default:
      return ((di - 1.0)*binsiz + tlmin);
    case 'E':
    case 'D':
      return ((di - 0.5)*binsiz + tlmin);
    }
  }
}

#ifdef ANSI_FUNC
double
tldim (double tlmin, double tlmax, double binsiz, int type)
#else
double tldim (tlmin, tlmax, binsiz, type)
     double tlmin;
     double tlmax;
     double binsiz;
     int type;
#endif
{
  if( (binsiz == 1.0) || (binsiz <= 0.0) ){
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
    default:
      return ((tlmax-tlmin) + 1.0);
    case 'E':
    case 'D':
      return (tlmax-tlmin);
    }
  }
  else{
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
    default:
      return ((tlmax-tlmin)/binsiz + 1.0);
    case 'E':
    case 'D':
      return ((tlmax-tlmin)/binsiz);
    }
  }
}

