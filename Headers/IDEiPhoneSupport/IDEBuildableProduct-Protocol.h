//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiPhoneSupport/IDEBuildable-Protocol.h>

@class DVTFileDataType, DVTFilePath, IDEBuildParameters, NSDictionary, NSString;

@protocol IDEBuildableProduct <IDEBuildable>
@property(readonly) BOOL isWidgetKitExtension;
@property(readonly) NSString *extensionPointIdentifier;
@property(readonly) BOOL productIsApp;
@property(readonly) BOOL isWatchAppRunsIndependentlyOfCompanionApplication;
@property(readonly) BOOL isWatchOnlyApplication;
@property(readonly) BOOL productIsExecutable;
@property(readonly) NSDictionary *productSettings;
@property(readonly) NSString *iconPath;
@property(readonly, copy) DVTFileDataType *fileDataType;
@property(readonly) DVTFilePath *filePath;
- (void)setProductSetting:(id)arg1 forKey:(NSString *)arg2;
- (id)productSettingForKey:(NSString *)arg1;
- (DVTFilePath *)filePathForBuildParameters:(IDEBuildParameters *)arg1;

@optional
@property(readonly) BOOL isEmbeddablePackageProduct;
@end

