//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSMenu, NSString;

@interface IBAccessorizedScrollViewBarSegment : NSObject
{
    NSString *_toolTip;
    NSString *_title;
    NSImage *_image;
    NSMenu *_menu;
    long long _tag;
}

+ (id)segmentWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 menu:(id)arg4 toolTip:(id)arg5;
+ (id)segmentWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 menu:(id)arg4;
+ (id)segmentWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
+ (id)segmentWithTag:(long long)arg1 image:(id)arg2 menu:(id)arg3;
+ (id)segmentWithTag:(long long)arg1 menu:(id)arg2;
+ (id)segmentWithTag:(long long)arg1;
@property(readonly) long long tag; // @synthesize tag=_tag;
@property(readonly) NSMenu *menu; // @synthesize menu=_menu;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *toolTip; // @synthesize toolTip=_toolTip;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 menu:(id)arg4 toolTip:(id)arg5;

@end

