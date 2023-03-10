// Copyright (C) 2014-2019 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "StubImpl.hpp"

using namespace v1_2::commonapi::examples;

E03MethodsStubImpl::E03MethodsStubImpl() {
    cnt = 0;
}

E03MethodsStubImpl::~E03MethodsStubImpl() {
}

void E03MethodsStubImpl::incCounter() {
    cnt++;
    fireMyStatusEvent((int32_t) cnt);
    std::cout << "New counter value = " << cnt << "!" << std::endl;
}
;

void E03MethodsStubImpl::foo(const std::shared_ptr<CommonAPI::ClientId> _client,
                int32_t _x1, std::string _x2,
                fooReply_t _reply) {

    std::cout << "foo called, setting new values." << std::endl;

    E03Methods::stdErrorTypeEnum methodError = E03Methods::stdErrorTypeEnum::MY_FAULT;
    int32_t y1 = _x1;
    std::string y2 = "Hello, " + _x2;
    _reply(methodError, y1, y2);
}
