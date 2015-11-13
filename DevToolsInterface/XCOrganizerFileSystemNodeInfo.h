//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCOrganizerNodeInfo.h>

@class NSImage, NSMutableArray, NSMutableDictionary, NSString;
@protocol XCFSNodeInfoCallback;

@interface XCOrganizerFileSystemNodeInfo : XCOrganizerNodeInfo
{
    NSString *_relativePath;
    NSString *_absolutePath;
    XCOrganizerFileSystemNodeInfo *_parentNode;
    NSMutableArray *_subNodes;
    NSMutableDictionary *_subNodesByName;
    long long _fileSystemNumber;
    unsigned long long _fileSystemFileNumber;
    CDStruct_b0cf6b6f _flags;
    NSImage *_iconImage;
    id <XCFSNodeInfoCallback> _callbackDelegate;
}

+ (id)_imageByApplyingBadge:(id)arg1 toImage:(id)arg2;
+ (id)_linkBadgeImage;
+ (id)_snapshotBadgeImage;
+ (id)_buildableBadgeImage;
+ (id)nodeWithParent:(id)arg1 atRelativePath:(id)arg2;
@property id <XCFSNodeInfoCallback> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
@property(retain) NSMutableDictionary *subNodesByName; // @synthesize subNodesByName=_subNodesByName;
@property(retain) NSMutableArray *subNodes; // @synthesize subNodes=_subNodes;
@property XCOrganizerFileSystemNodeInfo *parentNode; // @synthesize parentNode=_parentNode;
@property(copy) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property(copy) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void)considerEventForPath:(id)arg1 recursive:(BOOL)arg2;
- (void)_recursiveUpdateFromFileSystem;
- (void)_updateFromFileSystem;
- (void)setNewLocation:(id)arg1;
- (void)_refreshRoot;
- (void)renameTo:(id)arg1;
- (BOOL)hasFileSystemNumber:(long long)arg1 andFileSystemFileNumber:(unsigned long long)arg2;
@property(readonly) BOOL isTopLevelNode; // @dynamic isTopLevelNode;
@property(readonly) XCOrganizerFileSystemNodeInfo *topLevelNode; // @dynamic topLevelNode;
- (id)name;
- (id)childrenForMainTree;
@property(retain) NSImage *iconImage; // @dynamic iconImage;
- (id)iconImageOfSize:(struct CGSize)arg1;
- (id)description;
@property(readonly, copy) NSString *lastPathComponent; // @dynamic lastPathComponent;
@property BOOL hasSnapshots; // @dynamic hasSnapshots;
- (void)setBuildableInitially:(BOOL)arg1;
@property(getter=isBuildable) BOOL buildable; // @dynamic buildable;
@property(readonly) BOOL fileExists; // @dynamic fileExists;
@property(readonly) BOOL isReadable; // @dynamic isReadable;
@property(readonly) BOOL isDirectory; // @dynamic isDirectory;
@property(readonly) BOOL isLink; // @dynamic isLink;
- (BOOL)_childrenAreLoaded;
- (id)visibleSubNodes;
- (void)_constructSubNodes;
- (BOOL)_isVisibleSubNodeAtPath:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 atRelativePath:(id)arg2;
- (void)_readAttributes;
- (void)_invalidateAbsolutePath;
- (id)_absolutePathForParentPath:(id)arg1 andRelativepath:(id)arg2;

@end

