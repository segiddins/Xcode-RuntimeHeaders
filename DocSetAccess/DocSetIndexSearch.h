//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DocSetIndexSearch : NSObject
{
    struct __SKSearch *_search;
    BOOL _moreToSearch;
}

- (void)cancel;
- (BOOL)isFinished;
- (unsigned long long)findMaximumMatches:(unsigned long long)arg1 inMaximumTime:(double)arg2 returningIDs:(long long *)arg3 andScores:(float *)arg4;
- (struct __SKSearch *)searchRef;
- (void)finalize;
- (void)dealloc;
- (id)initWithIndex:(id)arg1 query:(id)arg2 options:(unsigned int)arg3;

@end

