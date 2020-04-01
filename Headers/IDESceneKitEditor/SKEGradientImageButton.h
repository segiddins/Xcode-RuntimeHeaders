//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTGradientImageButton.h>

#import <IDESceneKitEditor/SKEUIFactoryAppearanceControl-Protocol.h>

@class NSImage, NSString;

@interface SKEGradientImageButton : DVTGradientImageButton <SKEUIFactoryAppearanceControl>
{
    NSImage *_skeImage;
    NSImage *_skeInvertedImage;
    int _skeGradientStyle;
    unsigned long long _skeAppearance;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateAccordingToAppearance;
- (BOOL)canUseRegularDrawing;
@property(nonatomic) unsigned long long ske_appearance;
- (void)setGradientStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

