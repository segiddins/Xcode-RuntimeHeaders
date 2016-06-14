//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTLibrary, DVTMutableOrderedSet, DVTStackBacktrace, NSArray, NSImage, NSMutableArray, NSString;

@interface DVTAbstractLibraryGroup : NSObject <DVTInvalidation>
{
    DVTMutableOrderedSet *_childGroups;
    BOOL _titleIsEditable;
    NSMutableArray *_libraryGroupObservers;
    DVTLibrary *_library;
    NSImage *_image;
    NSString *_title;
    DVTAbstractLibraryGroup *_parentGroup;
    CDUnknownBlockType _groupComparator;
}

+ (void)initialize;
+ (id)defaultImage;
@property BOOL titleIsEditable; // @synthesize titleIsEditable=_titleIsEditable;
@property(copy, nonatomic) CDUnknownBlockType groupComparator; // @synthesize groupComparator=_groupComparator;
@property(retain, nonatomic) DVTAbstractLibraryGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(readonly) DVTLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)describeInto:(id)arg1 withDepth:(long long)arg2;
- (BOOL)containsAsset:(id)arg1;
- (void)removeAllAssets;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)insertAsset:(id)arg1 atIndex:(long long)arg2;
- (id)assets;
- (long long)numberOfAssets;
- (BOOL)assetsAreEditable;
- (id)firstChildGroupWithTitle:(id)arg1;
- (id)deepChildGroups;
- (long long)depth;
- (id)ancestors;
- (id)lineage;
- (id)titlePath;
- (id)indexPath;
- (BOOL)isLeafGroup;
@property(readonly) long long numberOfChildGroups;
@property(retain) NSArray *childGroups;
- (id)childGroupsEnumerator;
- (long long)indexOfGroup:(id)arg1;
- (void)removeAllGroups;
- (void)removeChildGroup:(id)arg1;
- (void)addChildGroup:(id)arg1;
- (void)insertChildGroup:(id)arg1 atIndex:(long long)arg2;
- (BOOL)groupsAreEditable;
- (void)notifyObserversOfChangedGroupsAndAssets;
- (void)notifyObserversOfChangedAssets;
- (id)addLibraryGroupObserver:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (id)initWithTitle:(id)arg1 andLibrary:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

