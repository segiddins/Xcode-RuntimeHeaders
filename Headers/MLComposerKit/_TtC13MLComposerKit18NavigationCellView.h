//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSImageView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit18NavigationCellView : NSTableCellView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *cellImageView;
    MISSING_TYPE *progressIndicator;
    MISSING_TYPE *trailingImageView;
    MISSING_TYPE *artifact;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cancelOperation:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic, retain) NSImageView *trailingImageView; // @synthesize trailingImageView;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) __weak NSImageView *cellImageView; // @synthesize cellImageView;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel;

@end

