//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTFilePath, IDEScheme, IDESchemeBuildableReference, NSError, NSString;
@protocol IDEBuildableProduct;

@interface IDERunnable : NSObject
{
    DVTFileDataType *_dataType;
    NSError *_dataTypeDetectionError;
    NSString *_bundleIdentifier;
    BOOL _usesSwift;
    BOOL _checkedForSwift;
    BOOL _isPlaceholder;
    int _runnableDebuggingMode;
    IDEScheme *_scheme;
    DVTFilePath *_remotePath;
}

+ (id)_productTypeForBuildableProduct:(id)arg1 scheme:(id)arg2;
+ (id)runnableForBuildProduct:(id)arg1 inScheme:(id)arg2;
- (void).cxx_destruct;
@property int runnableDebuggingMode; // @synthesize runnableDebuggingMode=_runnableDebuggingMode;
@property(nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, copy) DVTFilePath *remotePath; // @synthesize remotePath=_remotePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (BOOL)_checkForSwiftInBuildable;
@property(readonly) BOOL usesSwift;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setBundleIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (int)runnableType;
- (void)resolveBuildableFromImport;
@property(readonly) BOOL runsDirectlyOnPairedProxyDevice;
@property(readonly) BOOL requiresPairedProxyDevice;
@property(readonly) BOOL hasRunnablePath;
@property(readonly) IDESchemeBuildableReference *buildableReference;
@property(readonly) id <IDEBuildableProduct> buildableProduct;
- (id)runnableUTIType:(id *)arg1;
- (id)pathToRunnableForBuildParameters:(id)arg1;
@property(readonly, copy) NSString *toolTip;
@property(readonly, copy) NSString *displayName;

@end

