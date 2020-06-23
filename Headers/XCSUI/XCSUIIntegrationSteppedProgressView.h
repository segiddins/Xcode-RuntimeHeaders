//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <XCSUI/CALayerDelegate-Protocol.h>

@class CALayer, NSArray, NSMapTable, NSMutableArray, NSString;
@protocol XCSUIIntegrationSteppedProgressViewLabelProvider;

@interface XCSUIIntegrationSteppedProgressView : NSView <CALayerDelegate>
{
    NSArray *_possibleSteps;
    long long _currentStep;
    CALayer *_rootLayer;
    NSMutableArray *_labelLayers;
    NSMapTable *_buddyLayers;
    id <XCSUIIntegrationSteppedProgressViewLabelProvider> _labelProvider;
}

- (void).cxx_destruct;
@property __weak id <XCSUIIntegrationSteppedProgressViewLabelProvider> labelProvider; // @synthesize labelProvider=_labelProvider;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)reloadInformativeString;
- (void)reloadLabel;
- (void)repositionLabels;
- (void)layoutLabels;
- (void)updateLayer;
@property(nonatomic) long long currentStep;
@property(copy, nonatomic) NSArray *possibleSteps;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

