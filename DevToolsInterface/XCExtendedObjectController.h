//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSObjectController.h>

@interface XCExtendedObjectController : NSObjectController
{
    struct {
        unsigned int delegateListensForChanges:1;
        unsigned int delegateModifiesNewObject:1;
        unsigned int _RESERVED_:30;
    } _eacFlags;
    id _delegate;
}

- (id)newObject;
- (void)_notifyOfAnyContentChange;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_examineDelegate;

@end

