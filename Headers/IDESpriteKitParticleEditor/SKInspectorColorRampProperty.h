//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDESpriteKitParticleEditor/SKColorRampControlDelegate-Protocol.h>

@class DVTDelayedInvocation, IDEInspectorKeyPath, NSArray, NSString, SKColorRampControl;

@interface SKInspectorColorRampProperty : IDEInspectorProperty <SKColorRampControlDelegate>
{
    SKColorRampControl *colorRampControl;
    IDEInspectorKeyPath *_valueKeyPath;
    DVTDelayedInvocation *_delayedSetter;
    NSArray *_representedObjs;
}

- (void).cxx_destruct;
- (void)colorRampEndedInput:(id)arg1;
- (void)colorRampBeganInput:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

