//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTSourceExpression, DVTStackBacktrace, IDEIndexSymbol, IDERefactoring, NSMutableDictionary, NSOperationQueue, NSString;
@protocol IDERefactoringSessionDelegate, IDERefactoringTransformation;

@interface IDERefactoringSession : NSObject <DVTInvalidation>
{
    IDERefactoring *_refactoring;
    id <IDERefactoringTransformation> _transformation;
    DVTSourceExpression *_sourceExpression;
    IDEIndexSymbol *_selectedSymbol;
    id <IDERefactoringSessionDelegate> _delegate;
    NSOperationQueue *_queue;
    NSMutableDictionary *_cachedBuildSettingsForCompilationUnits;
}

+ (void)initialize;
@property(retain) IDEIndexSymbol *selectedSymbol; // @synthesize selectedSymbol=_selectedSymbol;
@property(readonly) id <IDERefactoringTransformation> transformation; // @synthesize transformation=_transformation;
@property(retain) id <IDERefactoringSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)snapshotDescription;
- (void)cancel;
- (void)previewChanges:(id)arg1;
- (void)start;
- (void)invalidateOnQueue;
- (void)primitiveInvalidate;
- (id)initWithRefactoring:(id)arg1 transformation:(id)arg2 sourceExpression:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

