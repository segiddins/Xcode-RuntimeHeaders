//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class DVTPredicateTextField, NSPopUpButton;

@interface IDEDMPredicateEditorFallbackRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_popUpButton;
    DVTPredicateTextField *_predicateTextField;
}

+ (id)rowTemplate;
- (void).cxx_destruct;
- (void)setPredicate:(id)arg1;
- (id)templateViews;
- (id)predicateTextField;
- (id)popUpButton;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;

@end

