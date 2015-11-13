//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelFoundation/CDMRelationship.h>

#import <IDEModelEditor/IDEDataModelObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface CDMRelationship (CDMNavigableIdentification) <IDEDataModelObject>
+ (id)keyPathsForValuesAffectingRepresentativeIcon;
@property(readonly) NSImage *representativeIcon;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray *hierarchyTreeControllerChildren; // @dynamic hierarchyTreeControllerChildren;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) id <IDEDMModelObject> parentObject; // @dynamic parentObject;
@property(readonly) id <IDEDMSourceObject> sourceObject; // @dynamic sourceObject;
@property(readonly) NSArray *structuralChildren; // @dynamic structuralChildren;
@property(readonly) Class superclass;
@end

