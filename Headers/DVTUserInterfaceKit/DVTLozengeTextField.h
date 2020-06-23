//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class DVTNotificationToken;

@interface DVTLozengeTextField : NSTextField
{
    id _superviewFrameChangeObserver;
    DVTNotificationToken *_fontThemeObserver;
    BOOL _followsFontAndColorTheme;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL followsFontAndColorTheme; // @synthesize followsFontAndColorTheme=_followsFontAndColorTheme;
- (void)setAutoCenterAndResizeToFitSuperview:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)_centerAndResizeToFitSuperview;
- (BOOL)allowsVibrancy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_sharedDVTLozengeTextFieldInit;
- (void)_updateAppearanceOrTextColor;
- (void)viewDidChangeEffectiveAppearance;
- (void)_observeFontAndColorTheme;
- (void)removeFromSuperview;

@end

