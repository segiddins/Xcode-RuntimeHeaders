//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DVTInvalidation-Protocol.h>
#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTObservingToken, DVTStackBacktrace, DVTSymbol, IDEFileReference, IDERecordedThreadCollection, NSArray, NSImage, NSNull, NSString, NSURL;

@interface DBGDisassemblyRecordedThreadCollectionWrapper : NSObject <DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDERecordedThreadCollection *_collection;
    DVTObservingToken *_recordedThreadsObserver;
    DVTObservingToken *_coalescedStateObserver;
    NSArray *_threadWrappers;
}

+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSArray *threadWrappers; // @synthesize threadWrappers=_threadWrappers;
- (void)primitiveInvalidate;
- (void)_invalidatePreviousThreadWrappers;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)geniusDisassemblyItemForStackFrame:(id)arg1;
- (void)_handleDebugSessionCoalescedStateChange:(id)arg1;
- (void)_handleRecordedThreadsChanged;
@property(readonly) IDERecordedThreadCollection *representedObject;
- (id)initWithRecordedThreadCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

