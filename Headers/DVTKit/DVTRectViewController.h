//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, DVTRectView, NSLayoutConstraint, NSTextField, NSView;

@interface DVTRectViewController : NSViewController
{
    BOOL _showsBorder;
    BOOL _adaptToTheme;
    DVTBorderedView *_borderedView;
    DVTRectView *_rectView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSView *_xyContainerView;
    NSTextField *_xyLabel;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
    NSTextField *_xyTitleLabel;
    NSTextField *_widthTitleLabel;
    NSTextField *_heightTitleLabel;
    struct CGRect _rect;
}

@property __weak NSTextField *heightTitleLabel; // @synthesize heightTitleLabel=_heightTitleLabel;
@property __weak NSTextField *widthTitleLabel; // @synthesize widthTitleLabel=_widthTitleLabel;
@property __weak NSTextField *xyTitleLabel; // @synthesize xyTitleLabel=_xyTitleLabel;
@property __weak NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property __weak NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property __weak NSTextField *xyLabel; // @synthesize xyLabel=_xyLabel;
@property __weak NSView *xyContainerView; // @synthesize xyContainerView=_xyContainerView;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property __weak DVTRectView *rectView; // @synthesize rectView=_rectView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic, getter=shouldAdaptToTheme) BOOL adaptToTheme; // @synthesize adaptToTheme=_adaptToTheme;
@property(nonatomic) BOOL showsBorder; // @synthesize showsBorder=_showsBorder;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (id)quickLookViewForUnadornedView;
- (void)_updateForCurrentTheme;
- (void)_updateBorder;
- (void)_updateFromRect;
- (void)loadView;
- (id)initWithDefaultNibName;

@end
