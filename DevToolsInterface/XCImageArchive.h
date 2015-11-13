//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableDictionary, NSString;

@interface XCImageArchive : NSObject
{
    NSString *_path;
    int _fd;
    NSMutableDictionary *_namesToEntries;
    NSError *_error;
}

- (BOOL)readBytes:(char *)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;
- (void)close;
- (id)imageNames;
- (id)imageNamed:(id)arg1;
- (id)path;
- (void)finalize;
- (void)dealloc;
- (id)initWithFileAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_loadArchiveEntries;

@end

