//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanGestureRecognizer.h>

@class NSEvent;

__attribute__((visibility("hidden")))
@interface UXCollectionViewPanGestureRecognizer : NSPanGestureRecognizer
{
    NSEvent *_mouseDownEvent;
}

@property(retain, nonatomic) NSEvent *mouseDownEvent; // @synthesize mouseDownEvent=_mouseDownEvent;
- (void)uxCancel;
- (void)mouseDown:(id)arg1;

@end

