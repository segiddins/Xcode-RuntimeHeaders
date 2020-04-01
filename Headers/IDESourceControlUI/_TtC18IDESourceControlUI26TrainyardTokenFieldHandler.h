//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/DVTFilterExpressionPresentationDelegate-Protocol.h>
#import <IDESourceControlUI/DVTFilteredDataSource-Protocol.h>
#import <IDESourceControlUI/DVTFilteredDataViewingContext-Protocol.h>
#import <IDESourceControlUI/NSTokenFieldDelegate-Protocol.h>

@class NSString, OS_dispatch_queue;

@interface _TtC18IDESourceControlUI26TrainyardTokenFieldHandler : NSObject <NSTokenFieldDelegate, DVTFilteredDataSource, DVTFilterExpressionPresentationDelegate, DVTFilteredDataViewingContext>
{
    // Error parsing type: , name: filteringQueue
    // Error parsing type: , name: tokens
    // Error parsing type: , name: filterFieldToolTip
    // Error parsing type: , name: filterFieldAccessibilityDescription
    // Error parsing type: , name: filterProgress
    // Error parsing type: , name: delegate
    // Error parsing type: , name: filterExpressionFieldController
    // Error parsing type: , name: tokenField
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

