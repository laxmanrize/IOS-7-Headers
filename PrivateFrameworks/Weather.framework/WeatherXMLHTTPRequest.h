/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface WeatherXMLHTTPRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
}

+ (void)saveDebugString;
+ (void)appendDebugString:(id)arg1;
@property(readonly, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)processDocument:(struct _xmlDoc *)arg1;
- (void)didProcessDocument;
- (void)willProcessDocument;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_forceRawDataDump:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (BOOL)isLoading;
- (void)cancel;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end
