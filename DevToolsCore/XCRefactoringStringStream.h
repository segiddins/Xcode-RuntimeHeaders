//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCRefactoringStringStream : NSObject
{
    struct _NXStream *_stream;
    char *_rawFileBuffer;
}

- (void)dealloc;
- (struct _NXStream *)fileStream;
- (id)initWithFileData:(id)arg1;

@end

