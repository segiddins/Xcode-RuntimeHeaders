//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class DVTStackView_ML, IBConnectionInterfaceStyle, IBImageButton, NSArray;
@protocol IBConnectionPredecessorViewDelegate;

@interface IBConnectionPredecessorView : DVTLayoutView_ML
{
    IBConnectionInterfaceStyle *_connectionInterfaceStyle;
    IBImageButton *_disconnectButton;
    DVTStackView_ML *_displayValueStack;
    BOOL _enabled;
    id _representedObject;
    id <IBConnectionPredecessorViewDelegate> _delegate;
}

+ (id)defaultTitleFieldWithInterfaceStyle:(id)arg1;
- (void).cxx_destruct;
@property __weak id <IBConnectionPredecessorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)disconnect:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)disconnectButtonForBounds:(struct CGRect)arg1;
- (double)displayValueRightInset;
- (double)displayValueLeftInset;
- (double)displayValueLineHeight;
- (BOOL)isFlipped;
- (void)refreshTitleFieldTextColor;
- (void)updateDisconnectButtonImages;
@property(copy) NSArray *displayValues;
- (id)titleFields;
- (id)connectionInterfaceStyle;
- (id)initWithFrame:(struct CGRect)arg1 interfaceStyle:(id)arg2 prototypeTitle:(id)arg3;

@end

