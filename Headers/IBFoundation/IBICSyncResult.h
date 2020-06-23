//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IBICSyncResult : NSObject
{
    NSMutableArray *_errors;
    NSMutableArray *_issues;
}

@property(readonly) NSArray *issues; // @synthesize issues=_issues;
@property(readonly) NSArray *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (id)description;
- (void)addIssues:(id)arg1;
- (void)addIssue:(id)arg1;
- (void)addErrors:(id)arg1;
- (void)addError:(id)arg1;
- (id)init;

@end

