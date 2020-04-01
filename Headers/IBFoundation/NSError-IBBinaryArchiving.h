//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (IBBinaryArchiving)
+ (id)ib_errorWithUnderlyingError:(id)arg1 recoverySuggestion:(id)arg2 localizedDescriptionFormat:(id)arg3;
+ (id)ib_errorWithLocalizedDescription:(id)arg1 domain:(id)arg2 code:(long long)arg3;
+ (id)ib_errorWithLocalizedDescriptionFormat:(id)arg1;
+ (id)ib_errorWithLocalizedDescription:(id)arg1;
+ (id)ib_errorWithLocalizedDescription:(id)arg1 failureReason:(id)arg2;
+ (id)ib_errorWithLocalizedDescription:(id)arg1 recoverySuggestion:(id)arg2;
+ (id)ib_errorWithLocalizedDescription:(id)arg1 failureReason:(id)arg2 recoverySuggestion:(id)arg3;
+ (id)ib_errorWithLocalizedDescription:(id)arg1 failureReason:(id)arg2 recoverySuggestion:(id)arg3 domain:(id)arg4 code:(long long)arg5;
+ (id)ib_errorWithLocalizedDescription:(id)arg1 failureReason:(id)arg2 recoverySuggestion:(id)arg3 domain:(id)arg4 code:(long long)arg5 recoveryOptions:(id)arg6 recoveryAttempter:(id)arg7;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)ib_firstObjectInSelfAndUnderlyingErrorsForUserInfoKey:(id)arg1;
- (id)ib_errorForPresentingToUserAfterLoggingToConsole;
- (id)ib_aggregatedDescriptionAndFailureReasons;
- (void)ib_enumerateSelfAndUnderlyingErrors:(CDUnknownBlockType)arg1;
- (id)ib_underlyingErrors;
- (id)ib_errorByInjectingUnderlyingError:(id)arg1;
- (id)ib_errorByInjectingUserInfoObject:(id)arg1 forKey:(id)arg2;
- (BOOL)ib_isErrorWithDomain:(id)arg1 code:(long long)arg2;
@end

