//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@interface IDEEnterFullScreenAlert : IDEAlert
{
    int _action;
}

@property(nonatomic) int action; // @synthesize action=_action;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareToRunForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3;
- (BOOL)_isEnabledForEvent:(id)arg1 withContext:(id)arg2;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)actions;

@end

