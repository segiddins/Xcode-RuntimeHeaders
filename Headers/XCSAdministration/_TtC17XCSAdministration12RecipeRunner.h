//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, XCSInstallationConfiguration, _TtC17XCSAdministration20AdministrationRecipe;

@interface _TtC17XCSAdministration12RecipeRunner : NSObject
{
    MISSING_TYPE *recipe;
    MISSING_TYPE *configuration;
    MISSING_TYPE *totalOperations;
    MISSING_TYPE *duration;
    MISSING_TYPE *error;
    MISSING_TYPE *queue;
    MISSING_TYPE *operationCounter;
    MISSING_TYPE *observers;
    MISSING_TYPE *lock;
}

+ (id)consoleRunnerWithRecipe:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)runAndReturnError:(id *)arg1;
- (id)initWithRecipe:(id)arg1 configuration:(id)arg2;
@property(nonatomic, copy) NSError *error;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) long long totalOperations; // @synthesize totalOperations;
@property(nonatomic, readonly) XCSInstallationConfiguration *configuration; // @synthesize configuration;
@property(nonatomic, readonly) _TtC17XCSAdministration20AdministrationRecipe *recipe; // @synthesize recipe;

@end

