//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEDocContentAreaViewController, NSString, NSView, NSVisualEffectView;
@protocol _TtP12IDEDocViewer27IDEDocNavigatorAreaDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC12IDEDocViewer19IDEDocNavigatorArea : IDEViewController
{
    // Error parsing type: , name: UUID
    // Error parsing type: , name: delegate
    // Error parsing type: , name: contentAreaViewController
    // Error parsing type: , name: visualEffectView
    // Error parsing type: , name: explorerContainer
    // Error parsing type: , name: documentationNavigator
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showRESTReferenceNavigator:(id)arg1;
- (void)showJSReferenceNavigator:(id)arg1;
- (void)showSwiftReferenceNavigator:(id)arg1;
- (void)showObjectiveCReferenceNavigator:(id)arg1;
- (void)updateWithURL:(id)arg1 explorableIdentifier:(id)arg2;
- (void)giveFilterFieldFocus;
- (void)primitiveInvalidate;
- (void)setStateToken:(id)arg1;
- (void)loadView;
@property(nonatomic, retain) NSView *explorerContainer; // @synthesize explorerContainer;
@property(nonatomic, retain) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView;
@property(nonatomic) __weak IDEDocContentAreaViewController *contentAreaViewController; // @synthesize contentAreaViewController;
@property(nonatomic, retain) id <_TtP12IDEDocViewer27IDEDocNavigatorAreaDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSString *UUID;

@end

