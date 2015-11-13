//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/NSTableViewDataSource-Protocol.h>
#import <Xcode3UI/NSTableViewDelegate-Protocol.h>

@class IDEGroup, NSMutableArray, NSSet, NSString, NSTableView, PBXProject, PBXTarget;

@interface Xcode3TargetMembershipDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    NSString *_buildableType;
    NSSet *_fileTypes;
    IDEGroup *_group;
    CDUnknownBlockType _willChangeTargetsBlock;
    CDUnknownBlockType _didChangeTargetsBlock;
    NSMutableArray *_wrappedTargets;
    PBXProject *_lastProject;
    PBXTarget *_lastTarget;
    NSTableView *_tableView;
}

@property(copy) CDUnknownBlockType didChangeTargetsBlock; // @synthesize didChangeTargetsBlock=_didChangeTargetsBlock;
@property(copy) CDUnknownBlockType willChangeTargetsBlock; // @synthesize willChangeTargetsBlock=_willChangeTargetsBlock;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IDEGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) NSSet *fileTypes; // @synthesize fileTypes=_fileTypes;
@property(copy, nonatomic) NSString *buildableType; // @synthesize buildableType=_buildableType;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)setSelectedBuildables:(id)arg1;
- (id)selectedBuildables;
- (id)selectedXcode3Targets;
- (id)selectedTargets;
- (void)rememberSelectedTargets;
- (void)updateTargets;
- (id)testTargetFromTargets:(id)arg1 validTargets:(id)arg2 project:(id)arg3;
- (id)targetForGroup:(id)arg1 rootGroup:(id)arg2 targets:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

