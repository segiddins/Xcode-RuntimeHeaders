//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface XCCommandLineToolInvocation : NSObject
{
    NSString *_toolIdent;
    NSDictionary *_paramDict;
    NSString *_conditionPath;
}

- (id)description;
- (id)createDependenciesInBuildContext:(id)arg1;
- (id)conditionPath;
- (id)parameterDictionary;
- (id)toolIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithToolIdentifier:(id)arg1 parameters:(id)arg2 conditionPath:(id)arg3;

@end

