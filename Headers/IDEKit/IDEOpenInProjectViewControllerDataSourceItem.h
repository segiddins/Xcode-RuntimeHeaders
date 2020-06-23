//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSImage, NSString, NSURL;

@interface IDEOpenInProjectViewControllerDataSourceItem : NSObject
{
    NSURL *_url;
    NSImage *_image;
    NSString *_name;
    NSString *_truncatedPath;
    NSDate *_lastOpenedDate;
    NSString *_shortLastOpenedDate;
}

+ (id)itemForURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *shortLastOpenedDate; // @synthesize shortLastOpenedDate=_shortLastOpenedDate;
@property(readonly) NSDate *lastOpenedDate; // @synthesize lastOpenedDate=_lastOpenedDate;
@property(readonly) NSString *truncatedPath; // @synthesize truncatedPath=_truncatedPath;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (id)description;
- (id)initWithURL:(id)arg1 image:(id)arg2 name:(id)arg3 truncatedPath:(id)arg4 lastOpenedDate:(id)arg5 shortLastOpenedDate:(id)arg6;

@end

