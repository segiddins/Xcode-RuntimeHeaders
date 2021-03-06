//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistantContext.h>

@class DVTSourceControlRemoteRepository, IDESourcePackageRequirement, NSArray, NSDictionary, NSMutableDictionary, NSString, PBXTarget, Xcode3Project;
@protocol DVTCancellable;

@interface Xcode3PackageAddPackageAssistantContext : IDEAssistantContext
{
    BOOL _hasValidRequirement;
    PBXTarget *_onlyTarget;
    Xcode3Project *_project;
    DVTSourceControlRemoteRepository *_remoteRepository;
    IDESourcePackageRequirement *_requirement;
    id <DVTCancellable> _preflightResolutionOperation;
    NSString *_resolvedPackageName;
    NSArray *_dependencyProducts;
    NSMutableDictionary *_selectedProducts;
    NSDictionary *_binaryArtifacts;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *binaryArtifacts; // @synthesize binaryArtifacts=_binaryArtifacts;
@property(nonatomic) BOOL hasValidRequirement; // @synthesize hasValidRequirement=_hasValidRequirement;
@property(retain, nonatomic) NSMutableDictionary *selectedProducts; // @synthesize selectedProducts=_selectedProducts;
@property(copy, nonatomic) NSArray *dependencyProducts; // @synthesize dependencyProducts=_dependencyProducts;
@property(copy, nonatomic) NSString *resolvedPackageName; // @synthesize resolvedPackageName=_resolvedPackageName;
@property(retain, nonatomic) id <DVTCancellable> preflightResolutionOperation; // @synthesize preflightResolutionOperation=_preflightResolutionOperation;
@property(copy, nonatomic) IDESourcePackageRequirement *requirement; // @synthesize requirement=_requirement;
@property(copy, nonatomic) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
@property(retain, nonatomic) Xcode3Project *project; // @synthesize project=_project;
@property(retain, nonatomic) PBXTarget *onlyTarget; // @synthesize onlyTarget=_onlyTarget;
- (id)init;

@end

