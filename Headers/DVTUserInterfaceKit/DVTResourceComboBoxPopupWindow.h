//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class DVTResourceComboBox;

@interface DVTResourceComboBoxPopupWindow : NSWindow
{
    DVTResourceComboBox *_comboBox;
}

- (void).cxx_destruct;
- (BOOL)hasShadow;
- (BOOL)hasKeyAppearance;
- (BOOL)canBecomeVisibleWithoutLogin;
- (BOOL)canBecomeKeyWindow;
- (BOOL)isKeyWindow;
- (BOOL)worksWhenModal;
- (id)initWithContentRect:(struct CGRect)arg1 comboBox:(id)arg2;

@end

