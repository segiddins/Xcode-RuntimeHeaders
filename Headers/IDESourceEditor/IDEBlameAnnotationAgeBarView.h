//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface IDEBlameAnnotationAgeBarView : NSView
{
    double _relativeAge;
    CALayer *_colorLayer;
    BOOL _isUncommitted;
    BOOL _dark;
}

@property BOOL dark; // @synthesize dark=_dark;
@property BOOL isUncommitted; // @synthesize isUncommitted=_isUncommitted;
@property double relativeAge; // @synthesize relativeAge=_relativeAge;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;

@end
