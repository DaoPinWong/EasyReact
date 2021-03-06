/**
 * Beijing Sankuai Online Technology Co.,Ltd (Meituan)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

@import Foundation;

@class EZRZipTransform;

NS_ASSUME_NONNULL_BEGIN

@interface EZRZipTransformGroup : NSObject

- (instancetype)initWithTransforms:(NSArray<EZRZipTransform *> *)transforms NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (id)nextValue;
- (void)removeTransform:(EZRZipTransform *)transform;

@end

NS_ASSUME_NONNULL_END
