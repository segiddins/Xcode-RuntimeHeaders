//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyFoundation/DebugHierarchyRequestAction-Protocol.h>

@class NSString;

@interface DebugHierarchyAbstractRequestAction : NSObject <DebugHierarchyRequestAction>
{
}

+ (id)actionWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)keysToArchiveViaKVC;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

