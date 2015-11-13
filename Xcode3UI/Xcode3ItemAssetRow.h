//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/Xcode3AssetRow.h>

@class IDEFileReference, NSString;
@protocol IDETaggedAssetItem;

@interface Xcode3ItemAssetRow : Xcode3AssetRow
{
    NSString *_tag;
    long long _tagType;
    id <IDETaggedAssetItem> _taggedItem;
    IDEFileReference *_fileReference;
    NSString *_parentPathForDisplay;
}

- (id)fileReference;
- (id)taggedItem;
- (long long)tagType;
- (id)tag;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)textColor;
- (id)parentPathForDisplay;
- (unsigned long long)size;
- (id)displayName;
- (void)addChild:(id)arg1;
- (id)childrenAtIndexes:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (BOOL)canEdit;
- (BOOL)canHaveChildren;
- (id)children;
- (id)expectedFilePaths;
- (id)expectedBaseFilePath;
- (id)initWithTaggedAssetItem:(id)arg1 tag:(id)arg2 type:(long long)arg3 andFileReference:(id)arg4;

@end

