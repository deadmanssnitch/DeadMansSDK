//
//  NetworkRequest.h
//  deadmanssnitch
//
//  Created by Tim Bugai on 8/22/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeadMansSDK.h"

typedef void (^RequestHandler)(NSDictionary *json);
typedef void (^RequestErrorHandler)(NSError *error);

@interface DMSNetworkRequest : NSObject<NSURLConnectionDataDelegate>

@property (nonatomic) NSString			*method;
@property (nonatomic) NSString			*url;
@property (nonatomic) NSDictionary	*data;

+ (id)get:(NSString *)url success:(RequestHandler)successHandler failure:(RequestHandler)failureHandler;
+ (id)get:(NSString *)url success:(RequestHandler)successHandler failure:(RequestHandler)failureHandler error:(RequestErrorHandler)errorHandler;
+ (id)post:(NSString *)url data:(NSDictionary *)data success:(RequestHandler)successHandler failure:(RequestHandler)failureHandler;
+ (id)post:(NSString *)url data:(NSDictionary *)data success:(RequestHandler)successHandler failure:(RequestHandler)failureHandler error:(RequestErrorHandler)errorHandler;
+ (id)delete:(NSString *)url success:(RequestHandler)successHandler failure:(RequestHandler)failureHandler;

- (id)initWithSuccessHandler:(RequestHandler)successHandler andFailureHandler:(RequestHandler)failureHandler andErrorHandler:(RequestErrorHandler)errorHandler;
- (void)perform;
@end
