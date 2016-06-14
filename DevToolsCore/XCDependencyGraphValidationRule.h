//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface XCDependencyGraphValidationRule : NSObject
{
    NSString *_nodeNamePattern;
    long long _expectedNodeCount;
    NSArray *_expectedDependsPatterns;
    NSArray *_expectedIncludesPatterns;
    NSDictionary *_expectedCommandPatterns;
}

- (BOOL)performValidationsInBuildContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPListDictionary:(id)arg1;

@end

