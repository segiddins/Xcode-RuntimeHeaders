//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollView.h>

#import <IDESceneKitEditor/SKEUIFactoryAppearanceControl-Protocol.h>

@class NSString;

@interface _DVTScopeBarScrollView : NSScrollView <SKEUIFactoryAppearanceControl>
{
    unsigned long long _skeAppearance;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
- (void)_layoutScrollContentView;
@property(nonatomic) unsigned long long ske_appearance;
- (void)pushViews:(id)arg1;
- (void)pushView:(id)arg1;
- (id)_dvtDocumentView;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

