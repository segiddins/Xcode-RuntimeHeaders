//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import <DVTKit/DVTGradientStyleButton-Protocol.h>

@class NSString;

@interface DVTGradientImagePopUpButton : NSPopUpButton <DVTGradientStyleButton>
{
}

+ (Class)cellClass;
- (void)setHighlightSides:(int)arg1;
- (int)highlightSides;
@property int borderSides;
@property int gradientStyle;
- (void)_doInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

