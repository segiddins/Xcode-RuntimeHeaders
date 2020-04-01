//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTTableCellViewStatusController.h>

@class IDENavigatorSCMStatusTextField, NSString;

@interface IDESCMTableCellStatusController : DVTTableCellViewStatusController
{
    IDENavigatorSCMStatusTextField *_faultedView;
    BOOL _hidden;
    NSString *_localStatus;
    NSString *_serverStatus;
}

@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *serverStatus; // @synthesize serverStatus=_serverStatus;
@property(copy, nonatomic) NSString *localStatus; // @synthesize localStatus=_localStatus;
- (void).cxx_destruct;
- (id)view;
- (void)propagateState;

@end

