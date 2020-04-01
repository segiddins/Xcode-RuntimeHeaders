//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor;

@interface IDETemplateChooserSelectionDrawingView : NSView
{
    NSArray *_keyWindowNotificationTokens;
    BOOL _drawsBackground;
    double _cornerRadius;
    NSColor *_activeBackgroundColor;
    NSColor *_inactiveBackgroundColor;
}

@property(retain, nonatomic) NSColor *inactiveBackgroundColor; // @synthesize inactiveBackgroundColor=_inactiveBackgroundColor;
@property(retain, nonatomic) NSColor *activeBackgroundColor; // @synthesize activeBackgroundColor=_activeBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

