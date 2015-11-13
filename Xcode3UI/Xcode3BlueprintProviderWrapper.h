//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSString;
@protocol IDEBlueprintProvider;

@interface Xcode3BlueprintProviderWrapper : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    id <IDEBlueprintProvider> _provider;
}

+ (id)keyPathsForValuesAffectingBlueprintWrappers;
@property(readonly) id <IDEBlueprintProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSArray *blueprintWrappers;
- (id)blueprint;
- (id)initWithBlueprintProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

