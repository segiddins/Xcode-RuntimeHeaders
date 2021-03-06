//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelFoundation/XDDevMappingModel.h>

#import <IDEModelEditor/IDEDMModelRootObject-Protocol.h>
#import <IDEModelEditor/IDEMappingModelObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface XDDevMappingModel (XDDevMappingModelNavigableIdentification) <IDEMappingModelObject, IDEDMModelRootObject>
+ (id)orderedLocationKeys;
+ (id)keyPathsForValuesAffectingStructuralChildren;
+ (id)keyPathsForValuesAffectingTopLevelObjects;
- (void)removeTopLevelObject:(id)arg1;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) NSImage *representativeIcon;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;
@property(readonly) NSString *name;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;
@property(readonly) NSArray *topLevelObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

