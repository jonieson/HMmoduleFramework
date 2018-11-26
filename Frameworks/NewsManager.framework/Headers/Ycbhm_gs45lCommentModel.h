//
//  Ycbhm_gs45lCommentModel.h
//  TMModule
//
//  Created by JD on 2018/9/27.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Ycbhm_gs45lCommentModel : NSObject
@property (nonatomic,strong)NSString *avatar;
@property (nonatomic,strong)NSString *nickname;
@property (nonatomic,strong)NSString *createTime;
@property (nonatomic,strong)NSString *priseCount;
@property (nonatomic,strong)NSString *content;
@property (nonatomic,strong)NSString *commentId;
@property (nonatomic,assign)int priseStatus;
+(Ycbhm_gs45lCommentModel *)jsonWithModel:(NSDictionary *)dic;
@end
