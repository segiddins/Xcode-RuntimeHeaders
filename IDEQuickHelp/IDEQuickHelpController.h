//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTPerformanceMetric, DVTSourceExpression, DVTStackBacktrace, DVTViewController, IDEQuickHelpQueryResult, NSString, WebView;

@interface IDEQuickHelpController : NSObject <DVTInvalidation>
{
    DVTSourceExpression *_selectedSourceExpression;
    NSString *_quickHelpContent;
    NSString *_placeholderString;
    BOOL _showsDocumentationSearch;
    WebView *_backgroundWebView;
    WebView *_targetWebView;
    struct CGSize _renderedContentSize;
    IDEQuickHelpQueryResult *_queryResult;
    DVTPerformanceMetric *_perfMetric;
}

+ (void)loadXSLTStylesheet;
+ (void)initialize;
@property(retain) DVTPerformanceMetric *perfMetric; // @synthesize perfMetric=_perfMetric;
@property(retain) IDEQuickHelpQueryResult *queryResult; // @synthesize queryResult=_queryResult;
@property struct CGSize renderedContentSize; // @synthesize renderedContentSize=_renderedContentSize;
@property(retain) WebView *backgroundWebView; // @synthesize backgroundWebView=_backgroundWebView;
@property(retain) WebView *targetWebView; // @synthesize targetWebView=_targetWebView;
@property BOOL showsDocumentationSearch; // @synthesize showsDocumentationSearch=_showsDocumentationSearch;
@property(retain) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(retain) NSString *quickHelpContent; // @synthesize quickHelpContent=_quickHelpContent;
@property(retain) DVTSourceExpression *selectedSourceExpression; // @synthesize selectedSourceExpression=_selectedSourceExpression;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)showDefaultHelpMessage;
- (id)localizedDefaultMessageString;
- (void)displayMessage:(id)arg1 withTitle:(id)arg2;
- (void)handleLinkClickWithActionInformation:(id)arg1;
- (void)renderWebView:(id)arg1 withHTML:(id)arg2 viewWidth:(double)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)updateRenderedContentSize;
- (void)updateRenderedContentSizeForFrame:(id)arg1;
- (void)generateContentForDataContext:(id)arg1 fromSource:(id)arg2;
- (void)generateContentForSourceExpression:(id)arg1 fromSource:(id)arg2;
- (void)generateContentForSourceExpression:(id)arg1 container:(id)arg2 symbolKind:(id)arg3 context:(id)arg4;
- (void)generateHTMLForDataContext:(id)arg1 inExpressionSource:(id)arg2 allowFallback:(BOOL)arg3;
- (void)generateHTMLForSymbol:(id)arg1 fromQueryDictionary:(id)arg2 inExpressionSource:(id)arg3 context:(id)arg4;
- (void)generateHTMLFromResult:(id)arg1;
- (void)generateHTMLFromResult:(id)arg1 xmlCommentBlock:(id)arg2 symbol:(id)arg3;
- (id)contentCreator;
- (id)mode;
@property(readonly) NSString *declaredInHeaderFileName;
@property(readonly) NSString *qualifiedName;
@property(readonly) NSString *tokenName;
@property(readonly) id <DVTSourceExpressionSource> sourceExpressionSource;
- (id)sourceExpressionWindow;
- (void)showHeaderFile:(id)arg1;
- (void)showDocumentation:(id)arg1;
- (void)closeQuickHelp;
- (void)showQuickHelp;
- (id)init;
- (id)localizedDefaultDescriptionString;
- (id)localizedMultipleResultsSearchInDocViewerString;
- (id)localizedSearchForSelectionInDocViewerString;
- (id)localizedNoSelectionString;
- (id)localizedCannotDetermineSymbolString;
- (id)localizedMultipleResultsFoundString;
- (id)localizedSymbolNotFoundString;
- (id)localizedTemplateForDocumentationNotFoundForTokenName;
- (id)localizedDocumentationNotFoundString;
- (id)localizedQuickHelpTitleString;
- (id)_safeShortTitleStringFromSelection:(id)arg1;
- (id)localizedTemplateForDocumentationNotFound;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly) DVTViewController *viewControllerWithContent; // @dynamic viewControllerWithContent;

@end

