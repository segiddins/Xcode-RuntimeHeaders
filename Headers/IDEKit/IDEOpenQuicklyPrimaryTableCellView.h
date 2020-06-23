//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOpenQuicklyAbstractTableCellView.h>

#import <IDEKit/IDEOpenQuicklyAlternatesIndicatorViewDelegate-Protocol.h>

@class IDEOpenQuicklyAlternatesIndicatorView, IDEOpenQuicklyTextField, NSImageView, NSString, NSTextField;
@protocol IDEOpenQuicklyTableCellViewDelegate;

@interface IDEOpenQuicklyPrimaryTableCellView : IDEOpenQuicklyAbstractTableCellView <IDEOpenQuicklyAlternatesIndicatorViewDelegate>
{
    IDEOpenQuicklyAlternatesIndicatorView *_alternatesIndicator;
    NSImageView *_iconView;
    IDEOpenQuicklyTextField *_titleField;
    NSTextField *_subtitleField;
    id <IDEOpenQuicklyTableCellViewDelegate> _delegate;
}

@property __weak id <IDEOpenQuicklyTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSTextField *subtitleField; // @synthesize subtitleField=_subtitleField;
@property(readonly) IDEOpenQuicklyTextField *titleField; // @synthesize titleField=_titleField;
@property(readonly) NSImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)alternatesIndicatorToggleAlternatesVisibility:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(retain) NSString *alternateIndicatorTitle;
- (void)arrangeSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

