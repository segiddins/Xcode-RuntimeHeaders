//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/DVTInvalidation-Protocol.h>
#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTSDK, DVTSourceExpression, DVTSourceLanguageService, NSString;

@protocol DVTSourceExpressionSource <NSObject, DVTInvalidation>
- (struct CGRect)expressionFrameForExpression:(DVTSourceExpression *)arg1;
@property(nonatomic, readonly) DVTSourceExpression *mouseOverExpression;
@property(nonatomic, readonly) struct CGRect currentSelectionFrame;
@property(nonatomic, readonly) DVTSourceExpression *contextMenuExpression;
@property(nonatomic, readonly) DVTSourceExpression *selectedExpression;

@optional
@property(nonatomic, readonly) DVTSDK *sdk;
@property(nonatomic, readonly) DVTSourceLanguageService *languageService;
@property(nonatomic, readonly) NSString *selectedText;
@property(nonatomic, readonly) DVTSourceExpression *quickHelpExpression;
@end

