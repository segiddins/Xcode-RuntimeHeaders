//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/CDMEntity.h>

#import <IDEModelEditor/IDEDataModelSourceObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface CDMEntity (CDMNavigableIdentification) <IDEDataModelSourceObject>
+ (id)orderedLocationKeys;
+ (id)keyPathsForValuesAffectingHierarchyTreeControllerChildren;
+ (id)keysPathForValuesAffectingStructuralChildren;
+ (id)keyPathsForValuesAffectingEntityNavigableChildren;
@property(readonly) NSArray *hierarchyTreeControllerChildren;
- (id)treeControllerChildren;
@property(readonly) NSImage *representativeIcon;
@property(readonly) NSArray *structuralChildren;
- (id)entityNavigableChildren;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@end

