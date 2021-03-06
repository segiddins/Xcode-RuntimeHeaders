//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTrackingArea;

@interface IBAutolayoutIssueCategoryHeaderCellView : NSTableCellView
{
    NSTrackingArea *_trackingArea;
    NSButton *_actionButton;
    NSButton *_infoButton;
    CDUnknownBlockType _actionButtonClickHandler;
    CDUnknownBlockType _infoButtonClickHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType infoButtonClickHandler; // @synthesize infoButtonClickHandler=_infoButtonClickHandler;
@property(copy, nonatomic) CDUnknownBlockType actionButtonClickHandler; // @synthesize actionButtonClickHandler=_actionButtonClickHandler;
@property(retain, nonatomic) NSButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)didPressInfoButton:(id)arg1;
- (void)didPressActionButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (void)_commonInit_IBAutolayoutIssueCategoryHeaderCellView;

@end

