//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13IDEFoundation21IDEBuildableReference : NSObject
{
    MISSING_TYPE *buildableIdentifier;
    MISSING_TYPE *blueprintIdentifier;
    MISSING_TYPE *blueprintName;
    MISSING_TYPE *referencedContainerPath;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSchemeBuildableReference:(id)arg1;
- (id)initWithBuildableIdentifier:(id)arg1 blueprintIdentifier:(id)arg2 blueprintName:(id)arg3 referencedContainerPath:(id)arg4;
@property(nonatomic, readonly) NSString *referencedContainerPath;
@property(nonatomic, readonly) NSString *blueprintName;
@property(nonatomic, readonly) NSString *blueprintIdentifier;
@property(nonatomic, readonly) NSString *buildableIdentifier;

@end

