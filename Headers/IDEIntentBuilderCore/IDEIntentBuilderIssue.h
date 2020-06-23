//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDEIntentBuilderIssueGenerator;

@interface IDEIntentBuilderIssue : NSObject
{
    unsigned long long _category;
    NSString *_message;
    id <IDEIntentBuilderIssueGenerator> _origin;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IDEIntentBuilderIssueGenerator> origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
- (id)initWithCategory:(unsigned long long)arg1 message:(id)arg2 origin:(id)arg3;

@end
