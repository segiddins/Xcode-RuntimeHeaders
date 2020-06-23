//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTTableCellViewStatusView-Protocol.h>

@class NSButton, NSImage, NSImageView, NSNumber, NSProgressIndicator;

@interface IDETestNavigatorStatusView : DVTStructuredLayoutView <DVTTableCellViewStatusView>
{
    NSNumber *_backgroundStyle;
    BOOL _showProgressIndicator;
    BOOL _testEnabled;
    BOOL _mouseOverEnclosingRow;
    BOOL _showStatusView;
    NSImageView *_statusImageView;
    NSButton *_button;
    NSProgressIndicator *_progressIndicator;
    NSImage *_statusImage;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
- (void).cxx_destruct;
@property(retain) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSButton *button; // @synthesize button=_button;
@property(retain) NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) BOOL showStatusView; // @synthesize showStatusView=_showStatusView;
@property(nonatomic) BOOL mouseOverEnclosingRow; // @synthesize mouseOverEnclosingRow=_mouseOverEnclosingRow;
@property(nonatomic) BOOL testEnabled; // @synthesize testEnabled=_testEnabled;
@property(nonatomic) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
@property(readonly) BOOL hasDisplayableStatus;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureProgressIndicatorUsingBackgroundStyle:(long long)arg1;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)setState:(unsigned long long)arg1 pendingRun:(BOOL)arg2;
@property(nonatomic) BOOL enableRunIcon;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) long long dvt_rowSizeStyle;

@end
