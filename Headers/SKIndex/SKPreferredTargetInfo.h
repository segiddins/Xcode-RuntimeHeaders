//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKPreferredTargetInfo : NSObject
{
    BOOL _isBuiltForRun;
    BOOL _isImplicitDependency;
    NSString *_indexableIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isImplicitDependency; // @synthesize isImplicitDependency=_isImplicitDependency;
@property(readonly, nonatomic) BOOL isBuiltForRun; // @synthesize isBuiltForRun=_isBuiltForRun;
@property(readonly, nonatomic) NSString *indexableIdentifier; // @synthesize indexableIdentifier=_indexableIdentifier;
- (id)description;
- (id)initWithIndexableIdentifier:(id)arg1 isBuiltForRun:(BOOL)arg2 isImplicitDependency:(BOOL)arg3;

@end

