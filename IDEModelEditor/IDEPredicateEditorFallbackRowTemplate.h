//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class IDEDataModelPredicateTextField, NSPopUpButton;

@interface IDEPredicateEditorFallbackRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *popup;
    IDEDataModelPredicateTextField *textField;
}

+ (id)rowTemplate;
- (void).cxx_destruct;
- (void)setPredicate:(id)arg1;
- (id)templateViews;
- (id)textField;
- (id)popup;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;

@end

