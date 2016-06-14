//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSCopying-Protocol.h>

@class NSDate, NSImage, NSString, NSURL;

@interface XCSplashScreenRecent : NSObject <NSCopying>
{
    NSURL *_url;
}

+ (id)recentsForURLs:(id)arg1;
@property(readonly) NSDate *accessDate;
@property(readonly) NSString *truncatedPath;
@property(readonly) NSString *name;
@property(readonly) NSImage *image;
@property(readonly) NSURL *url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

