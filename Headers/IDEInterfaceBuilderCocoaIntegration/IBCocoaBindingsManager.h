//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBDocument, NSString, NSUserDefaultsController;

@interface IBCocoaBindingsManager : NSObject <DVTInvalidation>
{
    NSUserDefaultsController *_sharedUserDefaultsControllerProxy;
    IBDocument *_document;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)isResolvedTypeNameAcceptable:(id)arg1 forBindingType:(id)arg2 forInspectedObject:(id)arg3;
- (BOOL)isTypeNameAcceptable:(id)arg1 forExpectedClassNameForBinding:(id)arg2;
- (BOOL)isClassNameAcceptable:(id)arg1 forExpectedClassNameForBinding:(id)arg2;
- (id)controllerArrayForSelectedObject:(id)arg1;
- (void)bindBindingNamed:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformerName:(id)arg4 options:(id)arg5 forObject:(id)arg6;
- (id)bindingInformationForObject:(id)arg1 withNibConnectors:(id)arg2;
- (id)nibConnectorsForObject:(id)arg1;
- (id)sharedUserDefaultsControllerProxy;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

