//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDESceneKitEditor/SKEUIFactoryAppearanceControl-Protocol.h>

@class NSString;

@interface _DVTBackgroundView : NSView <SKEUIFactoryAppearanceControl>
{
    unsigned long long _skeAppearance;
}

- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long ske_appearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

