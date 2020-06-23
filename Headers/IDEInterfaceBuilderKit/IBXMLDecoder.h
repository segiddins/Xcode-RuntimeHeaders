//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class IBSelfCompressingDataWrapper, IBXMLDecoderArchiveElement, IBXMLDecoderElement, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;
@protocol IBXMLDecoderDelegate;

@interface IBXMLDecoder : NSCoder
{
    NSMutableArray *_successfullyDecodedObjects;
    NSMapTable *_objectsToElements;
    NSMutableDictionary *_classFallbacks;
    NSMutableSet *_uniquedValueObjects;
    IBXMLDecoderArchiveElement *_archiveElement;
    NSMutableArray *_decodedBytes;
    IBSelfCompressingDataWrapper *_originalDocumentData;
    long long _nextGenericKey;
    NSSet *_objectElementNamesWithPotentialObjectChildren;
    NSSet *_specialCaseCollectionElementNames;
    NSDictionary *_specialTypesToClasses;
    NSMutableArray *_classesBeingDecoded;
    id <IBXMLDecoderDelegate> _delegate;
    IBXMLDecoderElement *_currentElement;
}

+ (void)setDecodersShouldCompressPreviousXMLForHints:(BOOL)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
@property(retain) IBXMLDecoderElement *currentElement; // @synthesize currentElement=_currentElement;
@property(retain) id <IBXMLDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)decodePropertyList;
- (id)decodeObject;
- (id)decodeDataObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)decodeNXObject;
- (id)nextGenericKey;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)objectForXMLElement:(id)arg1;
- (void)invokeRestoringDecodingStack:(CDUnknownBlockType)arg1;
- (Class)classForObjectElement:(id)arg1;
- (Class)classForClassName:(id)arg1;
- (id)hintsForFutureXMLCoder;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)mapElement:(id)arg1 toObject:(id)arg2;
- (id)elementForObject:(id)arg1;
- (id)deserializeObject:(id)arg1 fromXMLElement:(id)arg2;
- (id)deserializeSet:(id)arg1 fromXMLElement:(id)arg2;
- (id)deserializeDictionary:(id)arg1 fromXMLElement:(id)arg2;
- (id)deserializeArray:(id)arg1 fromXMLElement:(id)arg2;
- (BOOL)containsValueForKey:(id)arg1;
@property(readonly) NSArray *classesBeingDecoded;
- (BOOL)allowsKeyedCoding;
- (void)finishDecoding;
- (void)dealloc;
- (id)initForReadingWithData:(id)arg1 error:(id *)arg2;
- (id)initForReadingWithData:(id)arg1;

@end

