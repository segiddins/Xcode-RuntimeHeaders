//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOrderedSet, NSSet;
@protocol IBSelectionChannelApplicator;

@interface IBSelectionChannel : NSObject
{
    BOOL _applicatorRespondsToValidateValue;
    BOOL _applicatorRespondsToApplyValue;
    BOOL _applicatorRespondsToValidateSelection;
    BOOL _applicatorRespondsToApplySelection;
    BOOL _isApplyingValue;
    NSMutableDictionary *_channelValues;
    id <IBSelectionChannelApplicator> _applicator;
    IBSelectionChannel *_parentChannel;
    NSOrderedSet *_childChannels;
}

+ (id)defaultSelectionContext;
@property(copy, nonatomic) NSOrderedSet *childChannels; // @synthesize childChannels=_childChannels;
@property(nonatomic) __weak IBSelectionChannel *parentChannel; // @synthesize parentChannel=_parentChannel;
@property(readonly, nonatomic) __weak id <IBSelectionChannelApplicator> applicator; // @synthesize applicator=_applicator;
- (void).cxx_destruct;
- (BOOL)validateAndSetValue:(id)arg1 context:(id)arg2;
- (void)applyValue:(id)arg1 previousValue:(id)arg2 context:(id)arg3;
- (void)_pullDownValue:(id)arg1 context:(id)arg2;
- (void)pushUpSelectionByModifyingOwner:(CDUnknownBlockType)arg1;
- (void)pushUpSelection:(id)arg1;
- (void)pushUpSelectionWithContext:(id)arg1 byModifyingOwner:(CDUnknownBlockType)arg2;
- (void)pushUpSelection:(id)arg1 context:(id)arg2;
- (void)pushUpValue:(id)arg1 context:(id)arg2;
- (BOOL)isRootChannel;
- (void)setValue:(id)arg1 forChannelID:(id)arg2;
- (id)valueForChannelID:(id)arg1;
@property(readonly, nonatomic) NSSet *selection;
- (id)initWithApplicator:(id)arg1;

@end

