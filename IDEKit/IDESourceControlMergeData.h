//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

