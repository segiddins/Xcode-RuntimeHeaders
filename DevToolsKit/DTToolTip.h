//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTToolTip : NSObject
{
}

+ (id)boldToolTipFont;
+ (id)toolTipFont;
+ (id)attributedToolTipStringForString:(id)arg1;
+ (struct CGPoint)toolTipPositionForMouseLocation:(struct CGPoint)arg1;
+ (void)orderOutToolTip;
+ (void)fadeOut:(id)arg1;
+ (void)showToolTip:(id)arg1 withSourceRect:(struct CGRect)arg2 andMouseLocation:(struct CGPoint)arg3;
+ (void)showToolTip:(id)arg1 withSourceRect:(struct CGRect)arg2 andMouseLocation:(struct CGPoint)arg3 maximumWidth:(double)arg4;
+ (id)scheduledTimerWithInterval:(double)arg1;

@end

