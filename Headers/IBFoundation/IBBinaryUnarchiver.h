//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol IBObjectRepresentationTranslator;

@interface IBBinaryUnarchiver : NSObject
{
    NSMutableDictionary *overrideClassesByClassName;
    NSMutableArray *objectsIndexedByOID;
    unsigned long long currentDataBufferIndex;
    long long archiveVersion;
    NSData *data;
    struct {
        unsigned long long length;
        union {
            char *bytes;
            char *characters;
        } ;
    } buffer;
    NSMutableArray *_objectTranslationDelegateStack;
    NSDictionary *_context;
}

+ (Class)classForClassName:(id)arg1;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)_globalClassByClassNameMap;
+ (id)unarchiveObjectWithData:(id)arg1 context:(id)arg2 minArchiveVersion:(long long)arg3;
+ (id)unarchiveObjectWithData:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long archiveVersion; // @synthesize archiveVersion;
- (void).cxx_destruct;
- (Class)classForClassName:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
- (Class)decodeClass;
- (id)decodeUTF8String;
- (id)decodeObjectReferenceIfPossible;
- (id)decodeObject;
- (id)decodeObjectReference;
- (struct _NSRange)decodeRange;
- (CDStruct_c519178c)decodeInset;
- (struct CGRect)decodeCGRect;
- (struct CGSize)decodeCGSize;
- (struct CGPoint)decodeCGPoint;
- (double)decodeCGFloat;
- (unsigned long long)decodeUnsignedInteger;
- (long long)decodeInteger;
- (double)decodeDouble;
- (BOOL)decodeBool;
- (unsigned long long)decodeUInt64;
- (long long)decodeInt64;
- (void)decodeBytes:(CDUnknownBlockType)arg1;
- (const char *)internalOnlyDecodeBytesWithLength:(unsigned long long *)arg1;
- (BOOL)nextStructureTypeIsObject;
- (void)popObjectTranslationDelegate:(id)arg1;
- (void)pushObjectTranslationDelegate:(id)arg1;
@property(readonly, nonatomic) __weak NSObject<IBObjectRepresentationTranslator> *currentObjectTranslationDelegate;
- (id)initForReadingWithData:(id)arg1 context:(id)arg2;

@end
