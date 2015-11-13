//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/SCMModel.h>

#import <DevToolsCore/XCNetworkHostObserver-Protocol.h>

@class NSString, SCMRequest;

@interface SCMRepository : SCMModel <XCNetworkHostObserver>
{
    NSString *_system;
    NSString *_port;
    NSString *_host;
    NSString *_user;
    NSString *_password;
    NSString *_launchPath;
    NSString *_connectionStatusString;
    NSString *_connectionErrorString;
    SCMRequest *_connectionTestRequest;
    int _lastConnectionStatus;
    int _hostOnlineStatus;
    unsigned int _protocol;
    BOOL _authenticated;
    BOOL _online;
    BOOL _testedConnection;
    BOOL _needsConnectionTest;
    BOOL _testingConnection;
}

+ (id)repositoryConfigurationForPath:(id)arg1;
+ (id)systemName;
+ (id)systemIdentifier;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property BOOL testingConnection; // @synthesize testingConnection=_testingConnection;
@property BOOL needsConnectionTest; // @synthesize needsConnectionTest=_needsConnectionTest;
@property BOOL testedConnection; // @synthesize testedConnection=_testedConnection;
@property BOOL online; // @synthesize online=_online;
@property BOOL authenticated; // @synthesize authenticated=_authenticated;
@property unsigned int protocol; // @synthesize protocol=_protocol;
@property int lastConnectionStatus; // @synthesize lastConnectionStatus=_lastConnectionStatus;
@property(retain) SCMRequest *connectionTestRequest; // @synthesize connectionTestRequest=_connectionTestRequest;
@property(copy) NSString *connectionErrorString; // @synthesize connectionErrorString=_connectionErrorString;
@property(copy) NSString *connectionStatusString; // @synthesize connectionStatusString=_connectionStatusString;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(copy) NSString *user; // @synthesize user=_user;
@property(copy) NSString *host; // @synthesize host=_host;
@property(copy) NSString *port; // @synthesize port=_port;
@property(copy) NSString *system; // @synthesize system=_system;
- (id)description;
- (void)unlockOperation;
- (void)lockOperation;
- (void)moveOperation;
- (void)copyOperation;
- (void)deleteOperation;
- (void)mkdirOperation;
- (void)exportOperation;
- (void)importOperation;
- (void)checkoutOperation;
- (void)propertiesOperation;
- (void)infoOperation;
- (void)logOperation;
- (void)listOperation;
- (void)createOperation;
- (void)logoutOperation;
- (void)loginOperation;
- (id)requestImportFromPath:(id)arg1 toPath:(id)arg2 withMessage:(id)arg3;
- (id)requestExportFromPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (id)requestCheckoutFromPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (id)requestPropertiesForPath:(id)arg1 revision:(id)arg2;
- (id)requestInfoForPath:(id)arg1 revision:(id)arg2;
- (id)requestLogForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (id)requestListForPath:(id)arg1 revision:(id)arg2;
- (id)requestCreateRepositoryForPath:(id)arg1;
- (id)requestLogout;
- (id)requestLogin;
- (id)createRequestWithSelector:(SEL)arg1;
- (BOOL)canMove:(id)arg1;
- (BOOL)canCopy:(id)arg1;
- (BOOL)canDelete:(id)arg1;
- (BOOL)canCreateFolder:(id)arg1;
- (BOOL)canExport:(id)arg1;
- (BOOL)canImport:(id)arg1;
- (BOOL)canCheckout:(id)arg1;
- (BOOL)containsRootEntry:(id)arg1;
- (void)updateDirectoriesForPaths:(id)arg1;
- (void)updateDirectoryEntry:(id)arg1;
- (id)directoryEntryForPath:(id)arg1;
- (id)createDirectoryEntryForPath:(id)arg1;
- (void)refresh;
- (void)disconnect;
- (void)setConnectionStatus:(int)arg1;
- (int)connectionStatus;
- (void)finishConnectionTest:(id)arg1;
- (void)testConnection;
- (void)forceConnectionTest;
- (id)connectionStatusStringForStatusCode:(int)arg1;
@property int hostOnlineStatus; // @synthesize hostOnlineStatus=_hostOnlineStatus;
- (void)networkHostOnlineStatusChanged:(BOOL)arg1;
- (id)repository;
- (Class)sandboxClass;
- (id)sandboxNibName;
- (id)settingsEditorNibName;
@property(copy) NSString *password; // @synthesize password=_password;
- (id)passwordAccountName;
- (id)passwordServiceName;
- (void)setPath:(id)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (void)setName:(id)arg1;
- (id)absolutePathForModelPath:(id)arg1;
- (id)repositoryOffsetForSandboxAtPath:(id)arg1;
- (BOOL)ownsSandboxAtPath:(id)arg1;
- (BOOL)ownsSandboxWithAttributes:(id)arg1;
- (id)summary;
- (BOOL)isEqualToRepository:(id)arg1;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2;

@end

