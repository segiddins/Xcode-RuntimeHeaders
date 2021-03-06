//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DTTimelineMouseStateValidatorDelegate;

@interface DTTimelineMouseStateValidator : NSObject
{
    id <DTTimelineMouseStateValidatorDelegate> _delegate;
    unsigned long long _currentState;
}

+ (id)_validStateTransistions;
+ (id)descriptionForState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)transitionToState:(unsigned long long)arg1 event:(id)arg2;
- (void)_assertOrLogOldState:(unsigned long long)arg1 newState:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

