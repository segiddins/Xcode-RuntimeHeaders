//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUIssueCategory : NSObject
{
    NSMutableArray *_issues;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)issues;
- (void)addIssue:(id)arg1;
- (id)initWithName:(id)arg1;

@end

