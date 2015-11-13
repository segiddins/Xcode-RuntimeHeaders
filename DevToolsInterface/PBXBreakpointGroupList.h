//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, PBXBreakpointGroup;

@interface PBXBreakpointGroupList : NSObject
{
    NSMutableArray *_fileBreakpointGroups;
    PBXBreakpointGroup *_symbolicGroup;
    BOOL _haveSorted;
}

- (id)sortedGroups;
- (void)validateGroups;
- (void)addBreakpointToGroup:(id)arg1;
- (void)invalidateGroups;
- (id)groupForFileReference:(id)arg1;
- (id)groupForSymbolicBreakpoints;
- (id)_symbolicGroupIdentifier;
- (void)dealloc;
- (id)init;

@end

