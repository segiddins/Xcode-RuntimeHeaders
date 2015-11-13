//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

@class NSURL;

@interface IDERPathUpdatingFileWrapper : NSFileWrapper
{
    NSURL *_originalExecutableURL;
}

@property(copy) NSURL *originalExecutableURL; // @synthesize originalExecutableURL=_originalExecutableURL;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

