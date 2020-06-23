//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTStateToken, IDEDMEditorController, NSMutableArray, NSString;

@interface IDEDMSubViewControllerStateManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_stateIdentifiers;
    IDEDMEditorController *_parent;
    DVTStateToken *_token;
}

+ (void)initialize;
@property(retain) DVTStateToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithToken:(id)arg1 parent:(id)arg2;
- (void)_setupStateToken;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

