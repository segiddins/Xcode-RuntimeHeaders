//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiOSSupportCore/IDEBuildable-Protocol.h>

@class DVTFileDataType, DVTFilePath, IDEBuildParameters, NSDictionary, NSString;

@protocol IDEBuildableProduct <IDEBuildable>
@property(readonly) BOOL productIsExecutable;
@property(readonly) NSDictionary *productSettings;
@property(readonly) NSString *iconPath;
@property(readonly, copy) DVTFileDataType *fileDataType;
@property(readonly) DVTFilePath *filePath;
- (DVTFilePath *)filePathForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)productTypeIdentifier;
@end

