//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsCore/IDEConsolidatedCapabilitiesContextSource-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, NSDictionary, NSMutableDictionary, NSString, Xcode3Target;
@protocol IDEConsolidatedCapabilitiesContextSourceDelegate;

@interface Xcode3TargetConsolidatedCapabilitiesContextSource : NSObject <IDEConsolidatedCapabilitiesContextSource>
{
    id <IDEConsolidatedCapabilitiesContextSourceDelegate> _delegate;
    Xcode3Target *_target;
    DVTNotificationToken *_configurationNamesNotificationObservation;
    NSMutableDictionary *_mutableConfigurationToContextDidChangeSubscription;
    NSMutableDictionary *_mutableConfigurationToContext;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableConfigurationToContext; // @synthesize mutableConfigurationToContext=_mutableConfigurationToContext;
@property(retain, nonatomic) NSMutableDictionary *mutableConfigurationToContextDidChangeSubscription; // @synthesize mutableConfigurationToContextDidChangeSubscription=_mutableConfigurationToContextDidChangeSubscription;
@property(retain, nonatomic) DVTNotificationToken *configurationNamesNotificationObservation; // @synthesize configurationNamesNotificationObservation=_configurationNamesNotificationObservation;
@property(retain, nonatomic) Xcode3Target *target; // @synthesize target=_target;
@property(nonatomic) __weak id <IDEConsolidatedCapabilitiesContextSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)primitiveInvalidate;
- (void)updateConfigurationToContextNotifyingDelegate:(BOOL)arg1;
@property(readonly, nonatomic) NSDictionary *configurationToContext;
- (void)setUpObservations;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
