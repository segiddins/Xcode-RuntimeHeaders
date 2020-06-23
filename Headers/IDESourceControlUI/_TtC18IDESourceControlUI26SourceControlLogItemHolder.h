//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSourceControlRevisionLocation, DVTSourceControlVisualLogItem, DVTSourceControlWorkingCopy, MISSING_TYPE, NSImage, NSString;

@interface _TtC18IDESourceControlUI26SourceControlLogItemHolder : NSObject
{
    MISSING_TYPE *logItem;
    MISSING_TYPE *workingCopy;
    MISSING_TYPE *ideTypeIdentifier;
    MISSING_TYPE *name;
    MISSING_TYPE *documentLocation;
    MISSING_TYPE *location;
}

- (void).cxx_destruct;
- (id)init;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, readonly) NSString *navigableItem_archivingIdentifer;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, retain) DVTSourceControlRevisionLocation *location; // @synthesize location;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, retain) DVTSourceControlVisualLogItem *logItem; // @synthesize logItem;

@end
