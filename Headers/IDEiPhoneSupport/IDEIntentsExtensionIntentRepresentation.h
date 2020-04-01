//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEiPhoneSupport/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEIntentsExtensionModel, NSString;

@interface IDEIntentsExtensionIntentRepresentation : NSObject <DVTInvalidation>
{
    IDEIntentsExtensionModel *_model;
    NSString *_className;
    unsigned long long _restrictions;
}

+ (void)initialize;
@property(nonatomic) unsigned long long restrictions; // @synthesize restrictions=_restrictions;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) __weak IDEIntentsExtensionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithClassName:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

