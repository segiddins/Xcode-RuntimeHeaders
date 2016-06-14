//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionContext, NSSet;

@interface IDEDistributionStep : NSObject
{
    IDEDistributionContext *_context;
}

+ (id)availableOptionsForPropertyList;
@property(readonly) IDEDistributionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly) NSSet *providedOutputContextPropertyNames;
@property(readonly) NSSet *requiredInputContextPropertyNames;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

