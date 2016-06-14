//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBConnection : NSObject <NSCoding, NSCopying, IBDocumentArchiving>
{
    NSObject *_source;
    NSObject *_destination;
    NSString *_label;
}

+ (BOOL)isOrderedRelativeToUniformInstances;
+ (long long)ibMemberType;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)ibTypeIdentifier;
+ (id)connectionExtension;
+ (id)allConnectionExtensions;
+ (id)localIntegrationKeyPathsForConnectionExtension:(id)arg1 integrationType:(id)arg2 accessor:(CDUnknownBlockType)arg3;
+ (id)typeForInsertionConnectionContext:(id)arg1 forConnectingFromObject:(id)arg2 document:(id)arg3;
+ (id)prototypeConnectionForConnectingFromObject:(id)arg1 document:(id)arg2;
+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (void)refactorConnectionsInExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 fromObject:(id)arg4 toObject:(id)arg5 context:(id)arg6;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)determineBestInitialSelectionForObjects:(id)arg1 sourceObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (BOOL)supportsIdiom:(id)arg1;
+ (BOOL)isDeprecatedInDocument:(id)arg1;
+ (BOOL)shouldBeUserVisibleInDocument:(id)arg1;
+ (id)effectiveMenuLabelForConnection:(id)arg1 inDocument:(id)arg2;
+ (id)menuLabelForConnection:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)connectionWithSource:(id)arg1 label:(id)arg2 andDestination:(id)arg3;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSObject *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)effectiveConnectionForDisablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2;
- (id)effectiveConnectionForEnablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2 error:(id *)arg3;
- (void)replaceIfNecessaryAfterEnablingOrDisablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2;
- (id)messageForConnectingAcrossRepeatingStoryboardRelationship;
- (id)endPointForStoryboardCrossRepetitionWarning;
- (BOOL)canHaveDestinationSeparatedWithSeparationType:(int)arg1;
- (BOOL)canHaveSourceSeparatedWithSeparationType:(int)arg1;
- (long long)compareToPrototype:(id)arg1 predecessors:(id)arg2 predecessorsForSelf:(id)arg3 document:(id)arg4;
- (long long)compareToConnectionForPrototypeMenu:(id)arg1;
- (long long)compareToConnection:(id)arg1 forCompilationInDocument:(id)arg2;
- (id)ibLocalAutoNullifyingNonChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalNonChildToManyRelationshipsKeyPaths;
- (id)ibLocalToManyRelationshipsKeyPaths;
- (id)ibLocalAutoNullifyingNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalToOneRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)insertingFromPasteboardShouldRetargetEndPoint:(long long)arg1;
- (BOOL)shouldFollowDestinationToPasteboardAsExternalConnection;
- (BOOL)shouldFollowSourceToPasteboardAsExternalConnection;
- (void)objectContainer:(id)arg1 didRemoveConnectionWithContext:(id)arg2;
- (void)objectContainer:(id)arg1 willRemoveConnectionWithContext:(id)arg2;
- (void)objectContainer:(id)arg1 willRemoveObject:(id)arg2 context:(id)arg3;
- (void)addToDocument:(id)arg1;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)printablePListForIBToolInDocument:(id)arg1;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)exclusivityHintInObjectContainer:(id)arg1;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (BOOL)isEqualToPrototype:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEquivalentToPrototypeFor:(id)arg1 inDocument:(id)arg2;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)shouldShowInDocumentStructure;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (id)displayGroupIdentifierFromReferenceEndPoint:(id)arg1;
- (id)displayGroupIdentifierForDragFromObject:(id)arg1 toObject:(id)arg2;
- (BOOL)isCatchAllPrototypeForDisplayGroup;
- (id)_descriptionSubstringForDestination;
- (id)_descriptionSubstringForLabel;
- (id)_descriptionSubstringForSource;
@property(readonly, copy) NSString *description;
- (id)displayDescriptionInDocument:(id)arg1;
- (BOOL)canCoexistWithOtherConnectionsHavingSameEndPoint;
- (BOOL)allowsEstablishingNewConnections;
- (id)supersedingEndPoints;
- (id)supersedingDisplayValues;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)effectiveDisplayNameWithRespectToPredecessors:(id)arg1 document:(id)arg2;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (BOOL)validateEndPoint:(id)arg1;
- (id)nonContainerEndObjectInTargetRuntime:(id)arg1;
- (id)containerEndObjectInTargetRuntime:(id)arg1;
- (void)setEndPoint:(id)arg1;
- (id)endPoint;
- (id)equivalentSourceInDocument:(id)arg1;
- (id)equivalentDestinationInDocument:(id)arg1;
- (id)endPointForEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)completeWithMissingComponent:(id)arg1;
- (id)missingComponents;
- (BOOL)useConnectionSourceForSearchLocation;
- (BOOL)useConnectionSourceForWarningLocation;
- (void)setValue:(id)arg1 forEndPoint:(long long)arg2;
- (id)valueForEndPoint:(long long)arg1;
- (long long)relationshipType;
- (id)copyWithLabel:(id)arg1;
- (id)copyWithSource:(id)arg1 destination:(id)arg2 withContext:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)shouldBeArchivedByEndPoint;
- (id)archiveKeyForEndPoint:(long long)arg1;
- (id)archiveKeyForLabel;
- (long long)endPointToArchive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3;
- (id)initWithSource:(id)arg1 andLabel:(id)arg2;
- (id)initWithDestination:(id)arg1;
- (id)initWithDestination:(id)arg1 andLabel:(id)arg2;
- (id)connectionDefinitionForObject:(id)arg1;
- (id)ibXLIFFClassName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

