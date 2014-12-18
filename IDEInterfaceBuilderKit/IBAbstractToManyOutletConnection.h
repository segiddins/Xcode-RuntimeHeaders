//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBConnection.h>

@interface IBAbstractToManyOutletConnection : IBConnection
{
}

+ (id)typeForInsertionConnectionContext:(id)arg1 forConnectingFromObject:(id)arg2 document:(id)arg3;
+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (id)supportedCollectionClassNames;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (BOOL)isObjectValidOutletCollectionSource:(id)arg1;
+ (BOOL)isObjectValidOutletCollectionDestination:(id)arg1;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (id)archiveKeyForLabel;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)displayDescriptionInDocument:(id)arg1;
- (BOOL)refactorWithOutletChangeTypeRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (BOOL)refactorWithOutletMoveRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (BOOL)refactorWithOutletRenameRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (id)displayGroupIdentifierFromReferenceEndPoint:(id)arg1;
- (BOOL)isCatchAllPrototypeForDisplayGroup;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)exclusitivityHintInObjectContainer:(id)arg1;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (id)missingComponents;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (long long)relationshipType;
- (id)connectionDefinitionForObject:(id)arg1;

@end

