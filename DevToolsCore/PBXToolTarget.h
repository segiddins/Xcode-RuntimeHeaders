//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXJambaseTarget.h>

@interface PBXToolTarget : PBXJambaseTarget
{
}

+ (id)standardBuildPhaseClasses;
+ (id)targetTypeDisplayName;
+ (id)categorizedTargetName;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)productReferenceExpectedFileTypeForConfigurationNamed:(id)arg1;
- (BOOL)productReferenceIsExecutable;
- (BOOL)isJavaProduct;
- (BOOL)wantsProductSettings;
- (id)defaultProductTypeIdentifierByAnalyzingConfiguration;

@end

