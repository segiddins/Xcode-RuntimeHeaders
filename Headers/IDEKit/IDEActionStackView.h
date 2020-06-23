//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDECapsuleListView.h>

@protocol IDEActionStackViewDelegate;

@interface IDEActionStackView : IDECapsuleListView
{
    id <IDEActionStackViewDelegate> _delegate;
}

@property __weak id <IDEActionStackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateLayout;
- (id)initWithFrame:(struct CGRect)arg1 stackView:(id)arg2;

@end

