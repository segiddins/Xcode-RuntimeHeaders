//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEDocViewer/_TtC12IDEDocViewer26IDEDocumentationEntityBase.h>

@class DVTDocumentLocation, MISSING_TYPE, NSArray, NSImage, NSString, NSURL;

@interface _TtC12IDEDocViewer22IDEDocumentationEntity : _TtC12IDEDocViewer26IDEDocumentationEntityBase
{
    MISSING_TYPE *_entityRelationship;
    MISSING_TYPE *_kind;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) int language;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_accessibleImageDescription;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSString *_entityRelationshipIdentifier;
@property(nonatomic, readonly) NSArray *dvt_reflectingDebugDescriptionKeyPaths;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;

@end

