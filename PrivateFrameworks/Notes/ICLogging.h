//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICLogging : NSObject
{
}

+ (void)sendASLMessageWithLevel:(int)arg1 function:(const char *)arg2 line:(int)arg3 string:(id)arg4;
+ (void)logWithObject:(id)arg1 category:(id)arg2 level:(int)arg3 function:(const char *)arg4 line:(int)arg5 format:(id)arg6;
+ (void)clearAllLogFiles;
+ (id)URLsForAllLogFiles;
+ (id)findURLForLogDirectory;
+ (id)URLForLogDirectory;
+ (id)URLForCurrentLogFile;
+ (id)filenameForNewLogFile;
+ (_Bool)canWriteLogFile;
+ (id)logDirectoryName;
+ (id)loggingName;
+ (void)recreateASLOutputFileIfNecessary;
+ (id)welcomeString;
+ (void)recreateASLOutputFile;
+ (void)initializeASLClient;
+ (_Bool)isAppleInternalInstall;
+ (int)logLevelFromString:(id)arg1;
+ (_Bool)isKnownLevelString:(id)arg1;
+ (void)deleteOldLogFiles;
+ (void)setLogEverything:(_Bool)arg1;
+ (_Bool)shouldLogEverything;
+ (_Bool)shouldHideMethodAndFilename;
+ (void)setShowColors:(_Bool)arg1;
+ (id)endColorString;
+ (id)colorStringForLevel:(int)arg1;
+ (_Bool)isLoggingCategory:(id)arg1 enabledAtLevel:(int)arg2;
+ (void)initializeLoggers;
+ (void)setBreakPointLogLevel:(int)arg1;
+ (void)setDefaultLogLevel:(int)arg1;
+ (void)setLogLevel:(int)arg1 forClassWithName:(id)arg2;
+ (_Bool)shouldBreakForLevel:(int)arg1;
+ (_Bool)shouldAssertForLevel:(int)arg1;
+ (void)resumeLoggingQueue;
+ (void)suspendLoggingQueue;
+ (void)initialize;

@end

