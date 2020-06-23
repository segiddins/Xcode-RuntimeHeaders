//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class DVTSDK, DVTSourceExpression, DVTSourceLanguageService, NSString;

@protocol DVTSourceExpressionSource <NSObject, DVTInvalidation>
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
- (struct CGRect)expressionFrameForExpression:(DVTSourceExpression *)arg1;

@optional
@property(readonly) DVTSDK *sdk;
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@end

