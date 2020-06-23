//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDETemplate.h>

#import <Xcode3Core/Xcode3ProjectTemplateUnitParent-Protocol.h>

@class NSArray, NSString;

@interface Xcode3ProjectTemplate : IDETemplate <Xcode3ProjectTemplateUnitParent>
{
    NSArray *_units;
}

+ (id)additionalAvailableTemplatesOfTemplateKind:(id)arg1;
+ (void)addUnit:(id)arg1 fromUnits:(id)arg2 toDependencies:(id)arg3;
@property(readonly, copy) NSArray *units; // @synthesize units=_units;
- (void).cxx_destruct;
- (id)defaultCompletionName;
- (id)templateOptions;
- (long long)sortOrder;
- (id)templatePlatforms;
- (id)initWithTemplateInfo:(id)arg1 filePath:(id)arg2;
- (id)initWithUnits:(id)arg1 templateKind:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

