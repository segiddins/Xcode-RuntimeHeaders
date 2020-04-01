//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractStickerItem.h>

#import <IBFoundation/IBICCompilableSticker-Protocol.h>

@class IBICManifestArchivist, NSData, NSString;

@interface IBICStickerFrameSet : IBICAbstractStickerItem <IBICCompilableSticker>
{
    IBICManifestArchivist *_manifestArchivist;
    NSData *_assetData;
    long long _repetitions;
    long long _durationType;
    double _duration;
    NSString *_accessibilityLabel;
}

+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (BOOL)fileNameIsIdentifier;
+ (BOOL)displayNameIsItemName;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtensionWithAlternatesForReading;
+ (id)catalogItemFileExtension;
+ (Class)requiredChildrenClass;
+ (Class)requiredParentClass;
+ (id)createInstanceNamed:(id)arg1 frameCount:(long long)arg2 duration:(double)arg3 baseSize:(struct CGSize)arg4 usingRenderer:(CDUnknownBlockType)arg5;
+ (id)createDefaultInstancesForUnitTesting;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long durationType; // @synthesize durationType=_durationType;
@property(nonatomic) long long repetitions; // @synthesize repetitions=_repetitions;
- (void).cxx_destruct;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (BOOL)writeAPNGToPath:(id)arg1 withError:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pixelSize;
- (id)allPixelSizes;
- (id)imageIOProperties;
- (double)durationForFrame:(id)arg1;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (Class)manifestArchivist:(id)arg1 childClassForChildEntry:(id)arg2 results:(id)arg3;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)manifestContent;
- (id)manifestFileName;
- (id)initializeManifestArchivist;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (void)updateIdentifierOfIncomingChildToBeUnique:(id)arg1;
- (long long)childOrdering;
- (id)defaultUnqualifiedRuntimeName;
- (Class)expectedChildClassForSlot:(id)arg1;
- (id)init;
- (BOOL)compileToPath:(id)arg1 options:(id)arg2 results:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

