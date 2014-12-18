//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSImage;

@interface DVTButtonTextFieldCell : NSTextFieldCell <NSCoding, NSCopying>
{
    struct CGRect _cellFrame;
    BOOL _inButton;
    NSImage *_image;
    BOOL _alwaysShowButton;
    BOOL _useMetricsForAutolayout;
    NSImage *_alternateImage;
    NSImage *_highlightImage;
    id _buttonTarget;
    SEL _buttonAction;
    unsigned long long _imagePosition;
}

+ (BOOL)prefersTrackingUntilMouseUp;
@property BOOL useMetricsForAutolayout; // @synthesize useMetricsForAutolayout=_useMetricsForAutolayout;
@property unsigned long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property __weak id buttonTarget; // @synthesize buttonTarget=_buttonTarget;
@property(retain, nonatomic) NSImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property BOOL alwaysShowButton; // @synthesize alwaysShowButton=_alwaysShowButton;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (void)_sendButtonAction;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)_isPointInButton:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (id)_attributedStringValue;
- (struct CGSize)imageSize;
@property(retain, nonatomic) NSImage *image;
- (id)_templateImageFromImage:(id)arg1 withColor:(id)arg2;

@end

