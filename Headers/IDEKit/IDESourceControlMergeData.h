//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileWrapper;

@interface IDESourceControlMergeData : NSObject
{
    NSFileWrapper *_fileWrapper;
    BOOL _dirty;
}

@property(getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(retain) NSFileWrapper *fileWrapper; // @synthesize fileWrapper=_fileWrapper;
- (void).cxx_destruct;

@end

