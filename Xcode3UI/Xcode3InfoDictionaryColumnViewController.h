//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class IDEInspectorContentView, Xcode3InfoSection;

@interface Xcode3InfoDictionaryColumnViewController : IDEInspectorViewController
{
    Xcode3InfoSection *_section;
    int _column;
    IDEInspectorContentView *_generatedView;
}

@property(retain) IDEInspectorContentView *generatedView; // @synthesize generatedView=_generatedView;
@property(readonly) Xcode3InfoSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)bundle;
- (BOOL)supportsDocumentUndo;
- (id)selection;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)inspectorContentView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSection:(id)arg1 column:(int)arg2;

@end

