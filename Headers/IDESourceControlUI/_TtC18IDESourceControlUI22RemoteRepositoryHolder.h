//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI24SourceControlGroupHolder.h>

@class DVTFileDataType, DVTSourceControlRemoteRepository, MISSING_TYPE, NSImage, NSString;

@interface _TtC18IDESourceControlUI22RemoteRepositoryHolder : _TtC18IDESourceControlUI24SourceControlGroupHolder
{
    MISSING_TYPE *remote;
    MISSING_TYPE *workingCopy;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *navigableItem_toolTip;
- (BOOL)isEqualTo:(id)arg1;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, retain) DVTSourceControlRemoteRepository *remote; // @synthesize remote;

@end

