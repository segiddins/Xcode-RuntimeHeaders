//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSScrollView, NSTextField;

@interface DTTemplateChooserDetailView : NSView
{
    NSScrollView *descriptionScrollView;
    NSTextField *descriptionTextField;
    NSTextField *titleTextField;
    NSImageView *imageView;
}

- (void)sizeToFit;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (struct CGSize)descriptionSize;
- (double)headerHeight;
- (BOOL)isFlipped;
- (void)setDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)awakeFromNib;

@end

