//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSBox, NSImageView, NSLayoutConstraint, NSTextField;

@interface _TtC15IDEAnalyticsKit25AnalyticsKitTableCellView : NSTableCellView
{
    MISSING_TYPE *titleField;
    MISSING_TYPE *subtitleField;
    MISSING_TYPE *resolvedImageView;
    MISSING_TYPE *resolvedImageTopConstraint;
    MISSING_TYPE *resolvedImageHeightConstraint;
    MISSING_TYPE *appExtensionImageView;
    MISSING_TYPE *appExtensionImageTopConstraint;
    MISSING_TYPE *appExtensionImageHeightConstraint;
    MISSING_TYPE *terminationEventImageView;
    MISSING_TYPE *terminationEventImageTopConstraint;
    MISSING_TYPE *terminationEventImageHeightConstraint;
    MISSING_TYPE *separatorView;
    MISSING_TYPE *separatorLeadingConstraint;
    MISSING_TYPE *separatorTrailingConstraint;
    MISSING_TYPE *leadingContentInsetConstraint;
    MISSING_TYPE *verticalPadding;
    MISSING_TYPE *verticalImageSpacing;
    MISSING_TYPE *squareImageSize;
    MISSING_TYPE *isSystemTerminationEvent;
    MISSING_TYPE *showExtension;
    MISSING_TYPE *resolvedObservation;
    MISSING_TYPE *placeholderObservation;
    MISSING_TYPE *resolved;
    MISSING_TYPE *placeholder;
}

+ (id)loadFromNibWithNibName:(id)arg1 owner:(id)arg2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setupObservationsWithReport:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) BOOL resolved; // @synthesize resolved;
@property(nonatomic, retain) NSLayoutConstraint *leadingContentInsetConstraint; // @synthesize leadingContentInsetConstraint;
@property(nonatomic) __weak NSLayoutConstraint *separatorTrailingConstraint; // @synthesize separatorTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *separatorLeadingConstraint; // @synthesize separatorLeadingConstraint;
@property(nonatomic) __weak NSBox *separatorView; // @synthesize separatorView;
@property(nonatomic) __weak NSLayoutConstraint *terminationEventImageHeightConstraint; // @synthesize terminationEventImageHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *terminationEventImageTopConstraint; // @synthesize terminationEventImageTopConstraint;
@property(nonatomic) __weak NSImageView *terminationEventImageView; // @synthesize terminationEventImageView;
@property(nonatomic) __weak NSLayoutConstraint *appExtensionImageHeightConstraint; // @synthesize appExtensionImageHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *appExtensionImageTopConstraint; // @synthesize appExtensionImageTopConstraint;
@property(nonatomic) __weak NSImageView *appExtensionImageView; // @synthesize appExtensionImageView;
@property(nonatomic) __weak NSLayoutConstraint *resolvedImageHeightConstraint; // @synthesize resolvedImageHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *resolvedImageTopConstraint; // @synthesize resolvedImageTopConstraint;
@property(nonatomic) __weak NSImageView *resolvedImageView; // @synthesize resolvedImageView;
@property(nonatomic) __weak NSTextField *subtitleField; // @synthesize subtitleField;
@property(nonatomic) __weak NSTextField *titleField; // @synthesize titleField;

@end
