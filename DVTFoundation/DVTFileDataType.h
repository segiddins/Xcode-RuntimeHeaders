//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTFileDataType : NSObject <NSCopying>
{
    struct DVTBitSet *_conformanceBitSet;
}

+ (id)logAspect;
+ (id)fileDataTypeForFilePath:(id)arg1 error:(id *)arg2;
+ (id)fileDataTypeForFileURL:(id)arg1 error:(id *)arg2;
+ (id)fileDataTypeForFileContentAtPath:(id)arg1 error:(id *)arg2;
+ (id)fileDataTypeForFileContentAtURL:(id)arg1 error:(id *)arg2;
+ (id)_fileDataTypeForFileAtPath:(id)arg1 consideringFileContent:(BOOL)arg2 error:(id *)arg3;
+ (id)_findMatchingTypeUsingDetectors:(id)arg1 givenCurrentMatchingType:(id)arg2 filePath:(id)arg3 allowCustomDetectors:(BOOL)arg4 error:(id *)arg5;
+ (id)_matchingTypeDetectorExtensionsForFilePathExtension:(id)arg1;
+ (id)_launchServicesUTIForMimeType:(id)arg1;
+ (id)_launchServicesUTIForFileAtPath:(id)arg1;
+ (id)_convertFromLaunchServicesDynamicUTIIfNeeded:(id)arg1;
+ (id)fileDataTypeWithIdentifier:(id)arg1;
+ (id)fileDataTypeFromStringRepresentation:(id)arg1;
+ (id)_synthesizedFileTypeWithPrimaryType:(id)arg1 secondaryTypes:(id)arg2;
+ (void)_splitSynthesizedTypeStringRepresentation:(id)arg1 intoPrimaryType:(id *)arg2 andSecondaryTypes:(id *)arg3;
+ (id)_makeSynthesizedTypeStringRepresentationFromPrimaryType:(id)arg1 secondaryTypes:(id)arg2;
- (BOOL)isUnknownType;
- (BOOL)isDynamicType;
- (BOOL)isDeclaredType;
- (id)fileConversionTypeForFilePath:(id)arg1;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (BOOL)isGenericFileDataType;
- (BOOL)conformsToAnyIdentifierInSet:(id)arg1;
- (BOOL)conformsTo:(id)arg1;
- (BOOL)conformsToType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct DVTBitSet *)conformanceBitSet;
@property(readonly) NSString *displayName;
@property(readonly) NSString *identifier;
- (id)stringRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConformanceBitSetNoCopy:(struct DVTBitSet *)arg1;

@end

