//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEDocViewer/_TtC12IDEDocViewer37IDECollectionSpecificExplorableSource.h>

#import <IDEDocViewer/DVTFilterExpressionPresentationDelegate-Protocol.h>

@class NSString;

@interface _TtC12IDEDocViewer37IDECollectionSpecificExplorableSource (IDEDocViewer1) <DVTFilterExpressionPresentationDelegate>
- (id)textFragmentsForFilterExpression:(id)arg1;
- (id)relatedFilterExpressionsAffectingTypeIncludingExpression:(id)arg1;
- (id)relatedFilterExpressionsIncludingExpression:(id)arg1;
- (id)editingStringForFilterExpression:(id)arg1;
- (id)menuDisplayStringForFilterExpression:(id)arg1;
- (id)suffixFieldDisplayStringForFilterExpression:(id)arg1;
- (id)prefixFieldDisplayStringForFilterExpression:(id)arg1;
- (id)fieldDisplayStringForFilterExpression:(id)arg1;
- (id)titleForFilterIdentifier:(id)arg1;
- (id)filterExpressionForText:(id)arg1 isComplete:(BOOL)arg2 currentFilterExpression:(id)arg3;
- (id)validFilterExpressionsForExpressions:(id)arg1 currentFilterExpression:(id)arg2;
- (id)filterExpressionCompletionsForText:(id)arg1 currentFilterExpression:(id)arg2;
- (id)filterExpressionsForAdditionalFilteringOptionsMenu;
@property(nonatomic, readonly) NSString *filterFieldAccessibilityDescription;
@property(nonatomic, readonly) NSString *filterFieldToolTip;
@end
