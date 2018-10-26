//
//  Ycbhm_gs45lNewsModel.h
//  TMModule
//
//  Created by JD on 2018/9/12.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Ycbhm_gs45lNewsModel : NSObject
@property (nonatomic,strong)NSString *type;
@property (nonatomic,strong)NSString *content;
@property (nonatomic,strong)NSString *imgUrl;
@property (nonatomic,strong)NSString *readTime;
@property (nonatomic,strong)NSString *priseCount;
@property (nonatomic,strong)NSString *recommendCount;
@property (nonatomic,strong)NSString *artId;
@property (nonatomic,strong)NSString *title;
+(Ycbhm_gs45lNewsModel *)jsonWithModel:(NSDictionary *)dic;
@end
