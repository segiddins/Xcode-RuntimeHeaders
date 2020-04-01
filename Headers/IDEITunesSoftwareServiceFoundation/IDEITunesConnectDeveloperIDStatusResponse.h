//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEITunesSoftwareServiceFoundation/IDEITunesConnectServiceResponse.h>

@class NSNumber, NSString, NSURL;

@interface IDEITunesConnectDeveloperIDStatusResponse : IDEITunesConnectServiceResponse
{
    long long _status;
    NSNumber *_statusCode;
    NSString *_statusMessage;
    NSURL *_logFileURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSURL *logFileURL; // @synthesize logFileURL=_logFileURL;
@property(readonly) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(readonly) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithITunesSoftwareServiceDeveloperIDResponse:(id)arg1 error:(id *)arg2;
- (id)initWithIsSuccessful:(BOOL)arg1 errors:(id)arg2 warnings:(id)arg3 infoMessages:(id)arg4 status:(long long)arg5 statusCode:(id)arg6 statusMessage:(id)arg7 logFileURL:(id)arg8;

@end

