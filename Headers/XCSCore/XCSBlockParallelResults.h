//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface XCSBlockParallelResults : NSObject
{
    BOOL _hasTimedOut;
    NSDictionary *_errors;
    NSDictionary *_results;
}

+ (id)resultsWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) BOOL hasTimedOut; // @synthesize hasTimedOut=_hasTimedOut;
@property(retain, nonatomic) NSDictionary *errors; // @synthesize errors=_errors;
- (id)resultForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithResults:(id)arg1;

@end

