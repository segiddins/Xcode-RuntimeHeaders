//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEAuxiliaryEditorProviderAttributes : NSObject
{
    NSString *_title;
    NSString *_tooltip;
    Class _editorClass;
}

+ (id)sharedAttributes;
@property(readonly, nonatomic) Class editorClass; // @synthesize editorClass=_editorClass;
@property(readonly, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 tooltip:(id)arg2 providerClass:(Class)arg3;

@end

