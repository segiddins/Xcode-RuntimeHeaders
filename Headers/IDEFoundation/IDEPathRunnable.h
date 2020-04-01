//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDERunnable.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTFilePath, IDESchemeBuildableReference, NSString;
@protocol IDEBuildable;

@interface IDEPathRunnable : IDERunnable <DVTXMLUnarchiving>
{
    IDESchemeBuildableReference *_buildableReference;
    id <IDEBuildable> _buildableProduct;
    DVTFilePath *_filePath;
}

+ (id)keyPathsForValuesAffectingHasRunnablePath;
+ (id)automaticPlaceHolderForBuildable:(id)arg1 scheme:(id)arg2;
+ (id)_automaticPlaceHolderFilePath;
+ (id)askOnLaunchPlaceHolderForBuildable:(id)arg1 scheme:(id)arg2;
+ (id)_askOnLaunchPlaceHolderFilePath;
@property(readonly, copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(retain) id <IDEBuildable> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
@property(retain) IDESchemeBuildableReference *buildableReference; // @synthesize buildableReference=_buildableReference;
- (void).cxx_destruct;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setFilePathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (BOOL)isPlaceholder;
- (int)runnableType;
- (id)runnableUTIType:(id *)arg1;
- (BOOL)hasRunnablePath;
- (id)pathToRunnableForBuildParameters:(id)arg1;
- (id)toolTip;
- (id)bundleIdentifier;
- (id)displayName;
@property(readonly, copy) NSString *description;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

