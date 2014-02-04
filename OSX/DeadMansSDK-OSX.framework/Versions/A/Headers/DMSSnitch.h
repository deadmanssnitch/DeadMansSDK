//
//  Snitch.h
//  Dead Man's Snitch
//
//  Created by Tim Bugai on 6/25/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^SnitchRequestHandler)(NSArray *snitches);
typedef void (^RequestErrorHandler)(NSError *error);

@interface DMSSnitch : NSObject

@property (nonatomic) NSString	*name;
@property (nonatomic) NSString	*state;
@property (nonatomic) NSDate	*failedAt;
@property (nonatomic) NSDate	*checkedInAt;

+ (void)requestSnitches:(SnitchRequestHandler)requestHandler failure:(void (^)(NSDictionary *json))failureHandler error:(RequestErrorHandler)errorHandler;

+ (id)snitchFromJson:(NSDictionary *)json;
- (id)initWithJson:(NSDictionary *)json;

- (NSDate *)parseDateFromString:(NSString *)dateString;

- (NSString *)timeSinceLastCheckin;
@end
