/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IPC_C_ASHMEM_INTERNAL_H
#define IPC_C_ASHMEM_INTERNAL_H

#include <ashmem.h>
#include <refbase.h>
#include <stdint.h>

struct CAshmem: public OHOS::RefBase {
    CAshmem(OHOS::sptr<OHOS::Ashmem> &ashmem): ashmem_(ashmem) {}
    virtual ~CAshmem();

    OHOS::sptr<OHOS::Ashmem> ashmem_;
};

#endif /* IPC_C_ASHMEM_INTERNAL_H */
