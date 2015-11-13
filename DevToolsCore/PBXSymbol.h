//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXIndexEntry.h>

#import <DevToolsCore/PBXCompletionItem-Protocol.h>

@class NSObject, NSString;

@interface PBXSymbol : PBXIndexEntry <PBXCompletionItem>
{
    NSString *_cachedName;
    NSString *_cachedDeclaration;
    NSString *_cachedType;
    NSString *_cachedSourceFileName;
    NSObject *_cachedHelpMarker;
    long long _priority;
    unsigned int _type:6;
    unsigned int _isBeginUnused:1;
    unsigned int _usage:2;
    unsigned int _language:3;
    unsigned int _inProject:1;
    unsigned int _lineno:19;
    unsigned int _typeInfoInitialized:1;
    unsigned int _isCallablePointer:1;
    unsigned int _isBlockPointer:1;
    unsigned int _isConst:1;
}

+ (id)symbolWithSymbolRecord:(struct _pbxsymrec *)arg1 projectIndex:(id)arg2 location:(union _pbxsymbollocation)arg3;
+ (Class)symbolClassForSymbolType:(int)arg1;
+ (BOOL)canRepresentSymbolType:(int)arg1;
+ (id)_pathForHelpMarkerString:(id)arg1;
+ (BOOL)_doesHelpMarkerStringExist:(id)arg1;
+ (unsigned long long)offsetOfHelpMarker:(id)arg1;
+ (id)_helpMarkerCStringStorage;
+ (id)_helpMarkerCStringStoragePath;
+ (void)setAPIIndexDirectory:(id)arg1;
- (id)symbolsOfType:(int)arg1 includingInherited:(BOOL)arg2;
- (id)_symbolsOfType:(int)arg1 inheritanceOnly:(BOOL)arg2 includingInherited:(BOOL)arg3 alreadyVisited:(id)arg4;
- (id)description;
- (int)visibility;
- (id)typeDescriptor;
- (id)typeStringWithName:(BOOL)arg1 withParameterNames:(BOOL)arg2;
- (id)typeString;
- (id)_complexTypeString:(BOOL)arg1 withParameterNames:(BOOL)arg2;
- (id)declarationString;
- (id)documentationBookmark;
- (id)documentationFileReference;
- (id)sourceFileBookmark;
- (id)sourceFileBookmarkPreferUsage:(int)arg1;
- (id)sourceFileReference;
- (id)_fileReferenceForPath:(id)arg1;
- (id)sourceFileNameAndLineNumber;
- (id)sourceFileName;
- (id)sourceFilePath;
- (BOOL)sourceFileExists;
- (id)helpMarkerFilePath;
- (BOOL)hasDocumentation;
- (id)helpMarkerString;
- (id)helpMarkerSymbolValue;
- (id)helpMarkerSymbolType;
- (id)helpMarkerLanguageType;
- (BOOL)displayNameAllowsIndent;
- (id)displayNameIncludingClassInfo:(BOOL)arg1 abbreviated:(BOOL)arg2 indented:(BOOL)arg3;
- (id)displayNameIncludingClassInfo:(BOOL)arg1;
- (id)scopeSymbol;
- (id)parameterListSymbol;
- (id)correspondingSymbolForUsage:(int)arg1 preserveOriginalSymbolIfNoneFound:(BOOL)arg2;
- (id)containerSymbol;
- (id)counterpartSymbol;
- (id)definitionSymbol;
- (id)declarationSymbol;
- (id)uniqueName;
- (id)scopeOperator;
- (id)nameSpace;
- (id)simpleName;
- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)displayType;
- (id)displayText;
- (BOOL)isConst;
- (BOOL)isBlockPointer;
- (BOOL)isFunctionPointer;
- (BOOL)isCallablePointer;
- (void)setPriority:(long long)arg1;
- (long long)priority;
- (int)language;
- (int)usage;
- (BOOL)isInProject;
- (id)symbolTypeName;
- (int)symbolType;
- (unsigned long long)lineNumber;
- (id)name;
- (struct _pbxsymrec *)symbolRecord;
- (void)dealloc;
- (id)initWithProjectIndex:(id)arg1 symbolRecord:(struct _pbxsymrec *)arg2 location:(union _pbxsymbollocation)arg3;
- (void)_gatherTypeInfo;

@end

