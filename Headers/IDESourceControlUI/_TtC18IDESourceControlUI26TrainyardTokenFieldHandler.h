//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/NSTokenFieldDelegate-Protocol.h>

@class MISSING_TYPE, NSString, OS_dispatch_queue;

@interface _TtC18IDESourceControlUI26TrainyardTokenFieldHandler : NSObject <NSTokenFieldDelegate>
{
    MISSING_TYPE *filteringQueue;
    MISSING_TYPE *tokens;
    MISSING_TYPE *filterFieldToolTip;
    MISSING_TYPE *filterFieldAccessibilityDescription;
    MISSING_TYPE *filterProgress;
    MISSING_TYPE *delegate;
    MISSING_TYPE *filterExpressionFieldController;
    MISSING_TYPE *tokenField;
}

- (void).cxx_destruct;
- (id)init;
- (id)filterExpressionCompletionsForText:(id)arg1 currentFilterExpression:(id)arg2;
- (void)showMatches:(id)arg1 added:(id)arg2 removed:(id)arg3;
@property(nonatomic) long long filterProgress; // @synthesize filterProgress;
- (id)editingStringForFilterExpression:(id)arg1;
- (id)menuDisplayStringForFilterExpression:(id)arg1;
- (id)fieldDisplayStringForFilterExpression:(id)arg1;
- (id)validFilterExpressionsForExpressions:(id)arg1 currentFilterExpression:(id)arg2;
- (id)filterExpressionForText:(id)arg1 isComplete:(BOOL)arg2 currentFilterExpression:(id)arg3;
- (id)titleForFilterIdentifier:(id)arg1;
@property(nonatomic, copy) NSString *filterFieldAccessibilityDescription;
@property(nonatomic, copy) NSString *filterFieldToolTip;
- (void)filterSessionDidEnd:(id)arg1;
- (void)filterWithFilterSession:(id)arg1;
@property(nonatomic, retain) OS_dispatch_queue *filteringQueue; // @synthesize filteringQueue;

@end
