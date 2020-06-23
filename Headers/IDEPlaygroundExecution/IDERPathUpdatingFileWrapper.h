//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

@class NSURL;

@interface IDERPathUpdatingFileWrapper : NSFileWrapper
{
    NSURL *_originalExecutableURL;
}

- (void).cxx_destruct;
@property(copy) NSURL *originalExecutableURL; // @synthesize originalExecutableURL=_originalExecutableURL;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
