//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface DVTButtonImageTitleCell : NSButtonCell
{
    NSImage *_titleImage;
}

@property(copy) NSImage *titleImage; // @synthesize titleImage=_titleImage;
- (void).cxx_destruct;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_calculateRectsForTitleImage:(struct CGRect *)arg1 titleText:(struct CGRect *)arg2 padding:(double *)arg3 forBounds:(struct CGRect)arg4;

@end

