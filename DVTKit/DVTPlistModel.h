//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/DVTTextFindable-Protocol.h>
#import <DVTKit/DVTTextReplacable-Protocol.h>

@class DVTPlistNode, DVTPlistStructureDefinition, DVTStackBacktrace, NSDocument, NSString;
@protocol DVTPlistDocumentProtocol;

@interface DVTPlistModel : NSObject <DVTTextFindable, DVTTextReplacable, DVTInvalidation>
{
    NSDocument<DVTPlistDocumentProtocol> *_document;
    DVTPlistNode *_plist;
    DVTPlistStructureDefinition *_structureDefinition;
}

+ (void)initialize;
@property(readonly) NSDocument<DVTPlistDocumentProtocol> *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (unsigned long long)replaceAllResults:(id)arg1 inNode:(id)arg2 withString:(id)arg3;
- (BOOL)selection:(id)arg1 matchesString:(id)arg2 ignoreCase:(BOOL)arg3;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)_replaceValueInNode:(id)arg1 range:(struct _NSRange)arg2 replacement:(id)arg3;
- (id)replacePlist:(id)arg1 withPlist:(id)arg2;
- (void)movePlist:(id)arg1 toIndex:(long long)arg2;
- (id)setClass:(Class)arg1 forPlist:(id)arg2;
- (void)setLocalizedKey:(id)arg1 forPlist:(id)arg2;
- (void)setKey:(id)arg1 forPlist:(id)arg2;
- (void)deletePlist:(id)arg1;
- (id)addChild:(id)arg1 toPlist:(id)arg2 withKey:(id)arg3 atIndex:(long long)arg4;
- (void)_removeRoot;
- (id)setPlist:(id)arg1;
- (id)createNewChildForPlist:(id)arg1 withKey:(id)arg2;
- (id)keyForNewChildOfDictionary:(id)arg1;
- (id)keyByUniquingKey:(id)arg1 inDictionary:(id)arg2;
- (BOOL)canDeletePlist:(id)arg1;
- (BOOL)canAddChildToPlist:(id)arg1 withKey:(id)arg2;
- (id)placeholderValueForPlist:(id)arg1;
- (BOOL)canEditValueForPlist:(id)arg1;
- (BOOL)canEditClassForPlist:(id)arg1;
- (BOOL)canEditKeyForPlist:(id)arg1;
- (id)keyPathForPlist:(id)arg1;
- (id)plistForKeyPath:(id)arg1;
- (id)plist;
- (id)_setPlist:(id)arg1 forKeyPath:(id)arg2 atIndex:(long long)arg3 doReplace:(BOOL)arg4 doNotify:(BOOL)arg5;
- (void)_setPlistNoCopy:(id)arg1 forKeyPath:(id)arg2 atIndex:(long long)arg3 doReplace:(BOOL)arg4 doNotify:(BOOL)arg5;
- (void)_renameKey:(id)arg1 forKeyPath:(id)arg2;
@property(retain) DVTPlistStructureDefinition *plistStructureDefinition;
- (id)plistFromString:(id)arg1;
- (id)plistFromData:(id)arg1;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)xmlPropertyListForNode:(id)arg1;
- (id)asciiPropertyListForNode:(id)arg1;
- (BOOL)isValidASCIIPropertyList;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

