//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestingOutputStream-Protocol.h>

@class NSFileHandle;

@interface IDETestingFileHandleOutputStream : NSObject <IDETestingOutputStream>
{
    NSFileHandle *_fileHandle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void)finish;
- (void)writeString:(id)arg1;
- (id)initWithFileHandle:(id)arg1;

@end
