/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_EXAMPLES_E03_METHODS_SOMEIP_PROXY_HPP_
#define V1_COMMONAPI_EXAMPLES_E03_METHODS_SOMEIP_PROXY_HPP_

#include <v1/commonapi/examples/E03MethodsProxyBase.hpp>
#include <v1/commonapi/examples/E03MethodsSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Event.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <string>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace commonapi {
namespace examples {

class E03MethodsSomeIPProxy
    : virtual public E03MethodsProxyBase,
      virtual public CommonAPI::SomeIP::Proxy {
public:
    E03MethodsSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~E03MethodsSomeIPProxy();

    virtual MyStatusEvent& getMyStatusEvent();

    virtual void foo(int32_t _x1, std::string _x2, CommonAPI::CallStatus &_internalCallStatus, E03Methods::stdErrorTypeEnum &_error, int32_t &_y1, std::string &_y2, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> fooAsync(const int32_t &_x1, const std::string &_x2, FooAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

    virtual std::future<void> getCompletionFuture();

private:
    CommonAPI::SomeIP::Event<MyStatusEvent, CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t> >> myStatus_;

    std::promise<void> completed_;
};

} // namespace examples
} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_EXAMPLES_E03_Methods_SOMEIP_PROXY_HPP_