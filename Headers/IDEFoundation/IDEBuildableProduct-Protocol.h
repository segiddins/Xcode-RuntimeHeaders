//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBuildable-Protocol.h>

@class DVTFileDataType, DVTFilePath, IDEBuildParameters, NSDictionary, NSString;

@protocol IDEBuildableProduct <IDEBuildable>
@property(nonatomic, readonly) BOOL isWidgetKitExtension;
@property(nonatomic, readonly) NSString *extensionPointIdentifier;
@property(nonatomic, readonly) BOOL productIsApp;
@property(nonatomic, readonly) BOOL isWatchAppRunsIndependentlyOfCompanionApplication;
@property(nonatomic, readonly) BOOL isWatchOnlyApplication;
@property(nonatomic, readonly) BOOL productIsExecutable;
- (void)setProductSetting:(id)arg1 forKey:(NSString *)arg2;
- (id)productSettingForKey:(NSString *)arg1;
@property(nonatomic, readonly) NSDictionary *productSettings;
@property(nonatomic, readonly) NSString *iconPath;
@property(nonatomic, readonly) DVTFileDataType *fileDataType;
- (DVTFilePath *)filePathForBuildParameters:(IDEBuildParameters *)arg1;
@property(nonatomic, readonly) DVTFilePath *filePath;

@optional
@property(nonatomic, readonly) BOOL isEmbeddablePackageProduct;
@end

