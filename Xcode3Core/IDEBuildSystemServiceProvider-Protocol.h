//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3Core/NSObject-Protocol.h>

@class IDEBuildParameters, IDEWorkspace;
@protocol IDEBlueprintProvider;

@protocol IDEBuildSystemServiceProvider <NSObject>
@property(readonly, nonatomic) Class buildOperationClass;
@property(readonly, nonatomic) BOOL useAsDefault;
- (void)noteBlueprintProviderDidChange:(id <IDEBlueprintProvider>)arg1 inWorkspace:(IDEWorkspace *)arg2;
- (void)updateSourceCodeBuildInfoForFilesInWorkspace:(IDEWorkspace *)arg1 withBuildParameters:(IDEBuildParameters *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

