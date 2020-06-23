//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSNumber, NSString;

@interface IDEActivityStatusCategory : NSObject
{
    BOOL _alwaysShow;
    NSString *_title;
    NSImage *_image;
    long long _count;
    NSNumber *_updateDelay;
    CDUnknownBlockType _clickHandler;
}

+ (id)keyPathsForValuesAffectingShouldShow;
@property(readonly) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property(retain) NSNumber *updateDelay; // @synthesize updateDelay=_updateDelay;
@property BOOL alwaysShow; // @synthesize alwaysShow=_alwaysShow;
@property long long count; // @synthesize count=_count;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
@property(readonly) BOOL shouldShow;
- (id)initWithTitle:(id)arg1 image:(id)arg2 clickHandler:(CDUnknownBlockType)arg3;

@end

