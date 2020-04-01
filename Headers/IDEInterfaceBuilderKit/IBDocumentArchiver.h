//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDocumentArchiverRecursionState, IBDocumentArchivingSchema, NSArray, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol IBArchivableDocument;

@interface IBDocumentArchiver : NSObject
{
    IBDocumentArchivingSchema *_schema;
    IBDocumentArchiverRecursionState *_recursionState;
    NSMutableDictionary *_context;
    NSMutableDictionary *_objectReferenceIDs;
    NSMutableArray *_classesBeingEncoded;
    NSMutableArray *_archivingErrorMessages;
    NSNumber *_archiveVersion;
    id <IBArchivableDocument> _archivedDocument;
}

@property(readonly) NSArray *classesBeingEncoded; // @synthesize classesBeingEncoded=_classesBeingEncoded;
@property(readonly) NSMutableDictionary *context; // @synthesize context=_context;
@property(readonly) id <IBArchivableDocument> archivedDocument; // @synthesize archivedDocument=_archivedDocument;
- (void).cxx_destruct;
- (id)description;
- (void)addText:(id)arg1 withBase64EncodingIndicatorAttributeName:(id)arg2;
- (id)existingTextElement;
- (BOOL)isStringRepresentableAsAttributeValue:(id)arg1;
- (BOOL)isStringLosslesslyRepresentableAsElementText:(id)arg1;
- (void)addComment:(id)arg1;
- (void)archiveBool:(BOOL)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3;
- (void)archiveUnitLength:(CDStruct_e454a20b)arg1 forKey:(id)arg2 defaultValue:(CDStruct_e454a20b)arg3;
- (void)archiveDouble:(double)arg1 forKey:(id)arg2 defaultValue:(double)arg3;
- (void)archiveFloat:(float)arg1 forKey:(id)arg2 defaultValue:(float)arg3;
- (void)archiveInteger:(long long)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
- (void)archiveInt64:(long long)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
- (void)archiveString:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
- (void)archiveWrappedEdgeInsets:(id)arg1 forKey:(id)arg2;
- (void)archiveWrappedInset:(id)arg1 forKey:(id)arg2;
- (void)archiveWrappedSize:(id)arg1 forKey:(id)arg2;
- (void)archiveWrappedBitmask:(id)arg1 fromBitmask:(id)arg2 forKey:(id)arg3;
- (void)archiveWrappedEnumeratedValue:(id)arg1 fromEnumeration:(id)arg2 forKey:(id)arg3;
- (void)archiveWrappedDouble:(id)arg1 forKey:(id)arg2;
- (void)archiveWrappedInteger:(id)arg1 forKey:(id)arg2;
- (void)archiveWrappedBool:(id)arg1 forKey:(id)arg2;
- (void)archiveEnumeratedIntValue:(int)arg1 fromEnumeration:(id)arg2 forKey:(id)arg3 defaultValue:(int)arg4;
- (void)archiveEnumeratedValue:(long long)arg1 fromEnumeration:(id)arg2 forKey:(id)arg3 defaultValue:(long long)arg4;
- (void)archiveBitmask:(unsigned long long)arg1 fromBitmask:(id)arg2 forKey:(id)arg3 defaultValue:(unsigned long long)arg4;
- (void)archiveRange:(struct _NSRange)arg1 forKey:(id)arg2 defaultValue:(struct _NSRange)arg3;
- (void)archiveIBDirectionalEdgeInsets:(struct IBNSDirectionalEdgeInsets)arg1 forKey:(id)arg2 defaultValue:(struct IBNSDirectionalEdgeInsets)arg3;
- (void)archiveIBEdgeInsets:(struct NSEdgeInsets)arg1 forKey:(id)arg2 defaultValue:(struct NSEdgeInsets)arg3;
- (void)archiveEdgeInsets:(struct NSEdgeInsets)arg1 forKey:(id)arg2 defaultValue:(struct NSEdgeInsets)arg3;
- (void)archiveInset:(CDStruct_c519178c)arg1 forKey:(id)arg2 defaultValue:(CDStruct_c519178c)arg3;
- (void)archiveRect:(struct CGRect)arg1 forKey:(id)arg2 defaultValue:(struct CGRect)arg3;
- (void)archiveSize:(struct CGSize)arg1 forKey:(id)arg2 defaultValue:(struct CGSize)arg3;
- (void)archivePoint:(struct CGPoint)arg1 forKey:(id)arg2 defaultValue:(struct CGPoint)arg3;
- (void)archiveObjectReferenceDictionary:(id)arg1 withName:(id)arg2 referenceType:(id)arg3 forOptionalKey:(id)arg4 defaultValue:(id)arg5;
- (void)archiveDictionary:(id)arg1 withName:(id)arg2 forOptionalKey:(id)arg3 defaultValue:(id)arg4;
- (void)archiveArray:(id)arg1 withName:(id)arg2 forOptionalKey:(id)arg3 defaultValue:(id)arg4;
- (void)archiveObjectReference:(id)arg1 referenceType:(id)arg2 forKey:(id)arg3 defaultValue:(id)arg4;
- (void)archiveObject:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
- (void)archiveBool:(BOOL)arg1 forKey:(id)arg2;
- (void)archiveUnitLength:(CDStruct_e454a20b)arg1 forKey:(id)arg2;
- (void)archiveDouble:(double)arg1 forKey:(id)arg2;
- (void)archiveFloat:(float)arg1 forKey:(id)arg2;
- (void)archiveInteger:(long long)arg1 forKey:(id)arg2;
- (void)archiveInt64:(long long)arg1 forKey:(id)arg2;
- (void)archiveString:(id)arg1 forKey:(id)arg2;
- (void)archiveEnumeratedIntValue:(int)arg1 fromEnumeration:(id)arg2 forKey:(id)arg3;
- (void)archiveEnumeratedValue:(long long)arg1 fromEnumeration:(id)arg2 forKey:(id)arg3;
- (void)archiveBitmask:(unsigned long long)arg1 fromBitmask:(id)arg2 forKey:(id)arg3;
- (void)addNonKeyAttributeWithName:(id)arg1 andStringValue:(id)arg2;
- (void)archiveRange:(struct _NSRange)arg1 forKey:(id)arg2;
- (void)archiveOffset:(CDStruct_34734122)arg1 forKey:(id)arg2;
- (void)archiveIBDirectionalEdgeInsets:(struct IBNSDirectionalEdgeInsets)arg1 forKey:(id)arg2;
- (void)archiveIBEdgeInsets:(struct NSEdgeInsets)arg1 forKey:(id)arg2;
- (void)archiveEdgeInsets:(struct NSEdgeInsets)arg1 forKey:(id)arg2;
- (void)archiveInset:(CDStruct_c519178c)arg1 forKey:(id)arg2;
- (void)archiveRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)archiveSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)archivePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)appendToGroup:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)archiveGroupWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)archiveGroupWithName:(id)arg1 forKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)archiveGroupWithName:(id)arg1 forOptionalKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)archiveObjectReferenceDictionary:(id)arg1 withName:(id)arg2 referenceType:(id)arg3 forOptionalKey:(id)arg4;
- (void)archiveDictionary:(id)arg1 withName:(id)arg2 forOptionalKey:(id)arg3;
- (void)archiveDictionary:(id)arg1 withName:(id)arg2 forOptionalKey:(id)arg3 valueArchivingBlock:(CDUnknownBlockType)arg4;
- (void)archiveArray:(id)arg1 withName:(id)arg2 forOptionalKey:(id)arg3;
- (void)archiveObjectReference:(id)arg1 referenceType:(id)arg2 forKey:(id)arg3;
- (void)archiveObjectReferenceArray:(id)arg1 withName:(id)arg2 referenceType:(id)arg3 forOptionalKey:(id)arg4;
- (void)archiveObjectReference:(id)arg1 referenceType:(id)arg2;
- (void)archiveObjectReferenceAsElement:(id)arg1 referenceType:(id)arg2 forOptionalKey:(id)arg3;
- (void)archiveObject:(id)arg1 forKey:(id)arg2;
- (void)archiveObject:(id)arg1;
- (void)archiveObject:(id)arg1 forOptionalKey:(id)arg2;
- (void)archiveUsingBlockAfterArchivingSubgraph:(CDUnknownBlockType)arg1;
- (id)archiveElementNameForObject:(id)arg1;
- (void)archiveNilWithKey:(id)arg1 elementName:(id)arg2;
- (id)dataRepresentationOfArchivableDocument:(id)arg1 withType:(id)arg2 compatibilityVersion:(long long)arg3 error:(id *)arg4;
- (id)elementRepresentationOfArchivableDocument:(id)arg1 withType:(id)arg2 compatibilityVersion:(long long)arg3 error:(id *)arg4;
- (id)referencedObjectsForReferenceType:(id)arg1;
- (id)namespaceForObject:(id)arg1 withReferenceType:(id)arg2;
- (id)referenceIDForObject:(id)arg1 withReferenceType:(id)arg2 forReferencingThroughKey:(id)arg3;
- (void)registerReferenceID:(id)arg1 forObject:(id)arg2 withReferenceType:(id)arg3;
- (id)recurseWithElementNamed:(id)arg1 forObject:(id)arg2 kind:(long long)arg3 invokingBlock:(CDUnknownBlockType)arg4;
- (id)recurseWithArchiveToken:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly) long long archiveVersion;
- (id)initWithSchema:(id)arg1;
- (void)archiveImage:(id)arg1 forKey:(id)arg2;
- (void)archiveFormattedClassSymbol:(id)arg1 forKey:(id)arg2 moduleKey:(id)arg3 moduleProviderKey:(id)arg4;
- (void)archiveCustomFormattedClassSymbol:(id)arg1;
- (id)archivedIBDocument;

@end

