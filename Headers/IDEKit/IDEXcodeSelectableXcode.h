//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface IDEXcodeSelectableXcode : NSObject
{
    NSImage *_icon;
    NSString *_displayName;
    NSString *_appPath;
}

@property(readonly) NSString *appPath; // @synthesize appPath=_appPath;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)_initWith:(id)arg1 displayName:(id)arg2 appPath:(id)arg3;

@end

