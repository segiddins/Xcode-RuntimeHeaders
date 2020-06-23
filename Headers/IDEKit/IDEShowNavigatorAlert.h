//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSString;

@interface IDEShowNavigatorAlert : IDEAlert
{
    int _action;
    NSString *_navigator;
}

+ (id)navigators;
- (void).cxx_destruct;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *navigator; // @synthesize navigator=_navigator;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)switchToNavigatorInWorkspaceTabController:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)actions;
- (id)navigators;
- (id)init;

@end

