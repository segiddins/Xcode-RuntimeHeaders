//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEPegasusPlaygroundEditor/_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC26IDEPegasusPlaygroundEditor37PlaygroundDocumentationViewController : DVTViewController <_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_>
{
    MISSING_TYPE *playgroundEditor;
    MISSING_TYPE *markupText;
    MISSING_TYPE *lineRange;
    MISSING_TYPE *fontSettingsChangeNotificationToken;
    MISSING_TYPE *resourcesDirectory;
    MISSING_TYPE *sharedResourcesDirectory;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playgroundMarkupView:(id)arg1 openLink:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithCoder:(id)arg1;

@end

