//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTScopeBarController, IDEEditorBannerController;

@interface IDEEditorIssueReporterBannerController : NSObject
{
    DVTScopeBarController *_scopeBarController;
    IDEEditorBannerController *_bannerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEEditorBannerController *bannerController; // @synthesize bannerController=_bannerController;
@property(retain, nonatomic) DVTScopeBarController *scopeBarController; // @synthesize scopeBarController=_scopeBarController;
- (id)initWithIcon:(id)arg1 messageText:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

@end

