//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface DSATermQuery : NSObject
{
    NSArray *_termMatchList;
}

- (void).cxx_destruct;
- (float)scoreForTermList:(id)arg1 isTitleMatch:(char *)arg2;
- (BOOL)failsAllTests;
- (id)initWithSearchString:(id)arg1 withMatchType:(unsigned long long)arg2 usingManager:(id)arg3;

@end

