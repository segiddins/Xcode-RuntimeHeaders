//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADocSetAccess/DSATermMatch.h>

__attribute__((visibility("hidden")))
@interface DSATermSingleMatch : DSATermMatch
{
    unsigned int _termID;
    float _score;
}

- (float)scoreForTermID:(unsigned int)arg1;
- (float *)scores;
- (unsigned int *)termIDs;
- (unsigned long long)count;
- (id)description;
- (id)initForTermID:(unsigned int)arg1 withBaseScore:(float)arg2;

@end
