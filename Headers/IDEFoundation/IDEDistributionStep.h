//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionContext, NSSet;

@interface IDEDistributionStep : NSObject
{
    IDEDistributionContext *_context;
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
- (void).cxx_destruct;
@property(readonly) IDEDistributionContext *context; // @synthesize context=_context;
@property(readonly) NSSet *providedOutputContextPropertyNames;
@property(readonly) NSSet *requiredInputContextPropertyNames;
- (BOOL)loadFromExportOptions:(id)arg1 error:(id *)arg2;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

