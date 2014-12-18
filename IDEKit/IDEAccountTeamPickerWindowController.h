//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTPagingSheetWindowController.h"

@class DVTTeamRecord, NSArray, NSError, NSMapTable, NSString;

@interface IDEAccountTeamPickerWindowController : DVTPagingSheetWindowController
{
    BOOL _wantsMultipleSelection;
    DVTTeamRecord *_previouslySelectedTeam;
    NSString *_userFacingReason;
    NSString *_comprehensiveUserFacingReason;
    CDUnknownBlockType _teamFilter;
    NSString *_noFilterResultsUserFacingReason;
    NSMapTable *_selectedAccountsToTeamsMap;
    NSError *_error;
    NSMapTable *_allAccountsToAllTeamDictionariesFromToken;
    NSArray *_accountWrappers;
}

@property(copy, nonatomic) NSArray *accountWrappers; // @synthesize accountWrappers=_accountWrappers;
@property(copy, nonatomic) NSMapTable *allAccountsToAllTeamDictionariesFromToken; // @synthesize allAccountsToAllTeamDictionariesFromToken=_allAccountsToAllTeamDictionariesFromToken;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMapTable *selectedAccountsToTeamsMap; // @synthesize selectedAccountsToTeamsMap=_selectedAccountsToTeamsMap;
@property(retain, nonatomic) NSString *noFilterResultsUserFacingReason; // @synthesize noFilterResultsUserFacingReason=_noFilterResultsUserFacingReason;
@property(copy, nonatomic) CDUnknownBlockType teamFilter; // @synthesize teamFilter=_teamFilter;
@property(nonatomic) BOOL wantsMultipleSelection; // @synthesize wantsMultipleSelection=_wantsMultipleSelection;
@property(retain, nonatomic) NSString *comprehensiveUserFacingReason; // @synthesize comprehensiveUserFacingReason=_comprehensiveUserFacingReason;
@property(retain, nonatomic) NSString *userFacingReason; // @synthesize userFacingReason=_userFacingReason;
@property(retain, nonatomic) DVTTeamRecord *previouslySelectedTeam; // @synthesize previouslySelectedTeam=_previouslySelectedTeam;
- (void).cxx_destruct;
- (void)windowDidLoad;

@end

