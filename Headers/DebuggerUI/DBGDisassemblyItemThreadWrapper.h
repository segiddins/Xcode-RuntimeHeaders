//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DVTInvalidation-Protocol.h>
#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTObservingToken, DVTStackBacktrace, IDEFileReference, IDEThread, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface DBGDisassemblyItemThreadWrapper : NSObject <DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTObservingToken *_stackFramesObservingToken;
    BOOL _temporarilyCreatedForGeniusFinder;
    IDEThread *_thread;
    NSArray *_disassemblyItems;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(nonatomic) BOOL temporarilyCreatedForGeniusFinder; // @synthesize temporarilyCreatedForGeniusFinder=_temporarilyCreatedForGeniusFinder;
@property(copy, nonatomic) NSArray *disassemblyItems; // @synthesize disassemblyItems=_disassemblyItems;
@property(retain) IDEThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)geniusDisassemblyItemForStackFrame:(id)arg1;
- (void)_handleStackFramesChanged;
- (id)initWithThread:(id)arg1 temporarilyCreatedForGeniusFinder:(BOOL)arg2;

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
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

