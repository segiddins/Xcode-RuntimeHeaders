//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebugHierarchyKit/DBGSnapshotManager.h>

@class DBGViewDebugger;

@interface DBGSnapshotManagerXcode : DBGSnapshotManager
{
    DBGViewDebugger *_viewDebugger;
}

- (void).cxx_destruct;
@property __weak DBGViewDebugger *viewDebugger; // @synthesize viewDebugger=_viewDebugger;
- (id)_displayableStringFromRawErrorMessage:(id)arg1;
- (void)logMessage:(id)arg1 userFacing:(BOOL)arg2;

@end

