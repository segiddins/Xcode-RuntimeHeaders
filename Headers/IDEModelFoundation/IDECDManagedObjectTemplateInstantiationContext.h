//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETextSubstitutionTemplateInstantiationContext.h>

#import <IDEModelFoundation/NSCopying-Protocol.h>

@class CDMEntity, CDMModel, DVTFilePath, DVTVersion, NSDictionary, NSSet;

@interface IDECDManagedObjectTemplateInstantiationContext : IDETextSubstitutionTemplateInstantiationContext <NSCopying>
{
    BOOL _automaticInvocation;
    NSSet *_files;
    NSSet *_entities;
    CDMModel *_model;
    CDMEntity *_entity;
    NSDictionary *_deploymentTargets;
    DVTVersion *_swiftVersion;
    DVTFilePath *_modelFilePath;
}

@property(retain) DVTFilePath *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
@property(getter=isAutomaticInvocation) BOOL automaticInvocation; // @synthesize automaticInvocation=_automaticInvocation;
@property(retain) DVTVersion *swiftVersion; // @synthesize swiftVersion=_swiftVersion;
@property(retain) NSDictionary *deploymentTargets; // @synthesize deploymentTargets=_deploymentTargets;
@property(retain) CDMEntity *entity; // @synthesize entity=_entity;
@property(retain) CDMModel *model; // @synthesize model=_model;
@property(retain) NSSet *entities; // @synthesize entities=_entities;
@property(retain) NSSet *files; // @synthesize files=_files;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

