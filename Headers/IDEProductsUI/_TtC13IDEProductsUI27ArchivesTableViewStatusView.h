//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSImageView, NSStackView, NSTextField;

@interface _TtC13IDEProductsUI27ArchivesTableViewStatusView : NSTableCellView
{
    MISSING_TYPE *statusIconImageview;
    MISSING_TYPE *statusField;
    MISSING_TYPE *exportAppButton;
    MISSING_TYPE *showLogButton;
    MISSING_TYPE *statusFieldToStackViewSpacingConstraint;
    MISSING_TYPE *stackView;
    MISSING_TYPE *archive;
    MISSING_TYPE *showLogClosure;
    MISSING_TYPE *exportAppClosure;
    MISSING_TYPE *displayStatusButtons;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setArchiveWith:(id)arg1;
- (void)awakeFromNib;
- (void)showLogPressed:(id)arg1;
- (void)exportPressed:(id)arg1;
@property(nonatomic, readonly) BOOL wantsExportAppButton;
@property(nonatomic, readonly) BOOL wantsShowLogButton;
@property(nonatomic, copy) CDUnknownBlockType exportAppClosure;
@property(nonatomic, copy) CDUnknownBlockType showLogClosure;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField;
@property(nonatomic) __weak NSImageView *statusIconImageview; // @synthesize statusIconImageview;

@end

