//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class MISSING_TYPE, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface _TtC8DeltaKit21ComparisonSwoopButton : NSButton
{
    MISSING_TYPE *backgroundLayer;
    MISSING_TYPE *imageLayer;
    MISSING_TYPE *editor;
    MISSING_TYPE *textLayer;
}

+ (void)setCellClass:(Class)arg1;
+ (Class)cellClass;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) struct CGRect frame;
@property(nonatomic, retain) NSImage *image;
@property(nonatomic, copy) NSString *title;
@property(nonatomic) BOOL highlighted;
- (BOOL)isHighlighted;

@end

