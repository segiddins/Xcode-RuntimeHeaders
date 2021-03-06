//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>
#import <Xcode3UI/Xcode3InfoEditorListContentProvider-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, IDEWorkspace, NSArray, NSString;

@interface Xcode3InfoEditorSubclassNameProvider : NSObject <Xcode3InfoEditorListContentProvider, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSArray *_classNames;
    NSArray *_listContents;
    DVTNotificationToken *_indexChangedNotificationToken;
}

+ (void)initialize;
+ (id)subclassesForClassnames:(id)arg1 inWorkspace:(id)arg2;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSArray *listContents;
- (void)indexChanged:(id)arg1;
- (id)initWithWorkspace:(id)arg1 classNames:(id)arg2;
- (id)initWithBlueprint:(id)arg1 workspace:(id)arg2;
- (void)updateListContents;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

