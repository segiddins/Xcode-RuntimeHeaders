//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/DVTFilterExpressionPresentationDelegate-Protocol.h>
#import <IDESourceControlUI/DVTFilteredDataSource-Protocol.h>
#import <IDESourceControlUI/DVTFilteredDataViewingContext-Protocol.h>

@class MISSING_TYPE, NSString, OS_dispatch_queue;

@interface _TtC18IDESourceControlUIP33_27EF089589C614F87B4470D4C3293AED40_PullRequestMilestonesLabelsTokenHandler : NSObject <DVTFilteredDataSource, DVTFilterExpressionPresentationDelegate, DVTFilteredDataViewingContext>
{
    MISSING_TYPE *tokenField;
    MISSING_TYPE *updateDelegate;
    MISSING_TYPE *filterExpressionFieldController;
    MISSING_TYPE *pullRequest;
    MISSING_TYPE *availableLabels;
    MISSING_TYPE *availableMilestones;
    MISSING_TYPE *isBuildingTokens;
    MISSING_TYPE *filteringQueue;
    MISSING_TYPE *preSessionFilterExpression;
    MISSING_TYPE *filterFieldToolTip;
    MISSING_TYPE *filterFieldAccessibilityDescription;
    MISSING_TYPE *filterProgress;
}

- (void).cxx_destruct;
- (id)init;
- (void)showMatches:(id)arg1 added:(id)arg2 removed:(id)arg3;
@property(nonatomic) long long filterProgress; // @synthesize filterProgress;
- (id)editingStringForFilterExpression:(id)arg1;
- (id)menuDisplayStringForFilterExpression:(id)arg1;
- (id)fieldDisplayStringForFilterExpression:(id)arg1;
- (id)validFilterExpressionsForExpressions:(id)arg1 currentFilterExpression:(id)arg2;
- (id)filterExpressionForText:(id)arg1 isComplete:(BOOL)arg2 currentFilterExpression:(id)arg3;
- (id)filterExpressionCompletionsForText:(id)arg1 currentFilterExpression:(id)arg2;
- (id)titleForFilterIdentifier:(id)arg1;
@property(nonatomic, copy) NSString *filterFieldAccessibilityDescription;
@property(nonatomic, copy) NSString *filterFieldToolTip;
- (void)filterWithFilterSession:(id)arg1;
- (void)filterSessionDidEnd:(id)arg1;
- (void)filterSessionWillBegin:(id)arg1;
@property(nonatomic, retain) OS_dispatch_queue *filteringQueue; // @synthesize filteringQueue;

@end

