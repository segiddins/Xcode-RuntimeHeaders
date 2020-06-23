//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEQuickHelp/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEQuickHelpCompletionInfoViewController, NSAttributedString, NSString, _TtC12IDEQuickHelp22IDEQuickHelpController;

@interface IDEQuickHelpTextCompletionController : NSObject <DVTInvalidation>
{
    IDEQuickHelpCompletionInfoViewController *_infoViewController;
    DVTObservingToken *_quickHelpContentObservingToken;
    NSAttributedString *_altContent;
    double _width;
    CDUnknownBlockType _completionBlock;
    BOOL _shouldInvalidateInfoViewController;
    _TtC12IDEQuickHelp22IDEQuickHelpController *_quickHelpController;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC12IDEQuickHelp22IDEQuickHelpController *quickHelpController; // @synthesize quickHelpController=_quickHelpController;
- (void)_updateQuickHelpContent:(id)arg1;
- (void)primitiveInvalidate;
- (id)_initWithQuickHelpController:(id)arg1 altContent:(id)arg2 width:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

