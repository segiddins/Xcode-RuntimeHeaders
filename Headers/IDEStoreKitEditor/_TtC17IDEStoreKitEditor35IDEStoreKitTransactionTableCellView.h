//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSBox, NSButton, NSImageView, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC17IDEStoreKitEditor35IDEStoreKitTransactionTableCellView : NSTableCellView
{
    MISSING_TYPE *idLabel;
    MISSING_TYPE *issueImageView;
    MISSING_TYPE *separator;
    MISSING_TYPE *subscriptionOptionsButton;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *timestampLabel;
    MISSING_TYPE *warningImageView;
    MISSING_TYPE *imageLeadingConstraint;
    MISSING_TYPE *transaction;
    MISSING_TYPE *hideSeparator;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)subscriptionOptionsPressed:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *imageLeadingConstraint; // @synthesize imageLeadingConstraint;
@property(nonatomic) __weak NSImageView *warningImageView; // @synthesize warningImageView;
@property(nonatomic) __weak NSTextField *timestampLabel; // @synthesize timestampLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak NSButton *subscriptionOptionsButton; // @synthesize subscriptionOptionsButton;
@property(nonatomic) __weak NSBox *separator; // @synthesize separator;
@property(nonatomic) __weak NSImageView *issueImageView; // @synthesize issueImageView;
@property(nonatomic) __weak NSTextField *idLabel; // @synthesize idLabel;

@end

